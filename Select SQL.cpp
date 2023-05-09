#include <mysql.h>
#include <iostream>
using namespace std;
int main()
{
    int q_estado;
    MYSQL* connect;
    MYSQL_ROW fila;
    MYSQL_RES* resultado;

    connect = mysql_init(0);
    connect = mysql_real_connect(connect, "localhost", "usr_empresa", "Empres@123", "db_empresa", 3306, NULL, 0);
    if (connect) {
        cout << "Conexion Exitosa!" << endl;
        system("pause");
        system("cls");
        /*system("pause");
        system("cls");
        string puesto;
        //insert
        cout << "Ingrese puesto a guardar en la base de datos: " << endl;
        cin >> puesto;
        string insert = "Insert Into puestos(puesto) Values ('" + puesto + "')";
        const char* i = insert.c_str();
        q_estado = mysql_query(connect, i);
        if (!q_estado) {
            system("cls");
            cout << "Query Insert Successfuly" << endl;
        }
        else {
            system("cls");
            cout << "Query Insert got problems";
        }*/
        string consulta = "SELECT *FROM puestos";
        const char* x = consulta.c_str();
        q_estado = mysql_query(connect, x);
        if (!q_estado) {
            resultado = mysql_store_result(connect);
            while (fila = mysql_fetch_row(resultado)) {
                cout<<"id: " << fila[0]<<endl;
                cout << "puesto: " << fila[1] << endl;
            }
        }
        else {
            system("cls");
            cout << "Query Select got problems" << endl;
        }
    }
    else {
        cout << "Error en la conexion" << endl;
    }
    return 0;
}
