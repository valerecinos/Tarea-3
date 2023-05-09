#include <mysql.h>
#include <iostream>
using namespace std;
int main()
{
    MYSQL* connect;
    connect = mysql_init(0);
    connect = mysql_real_connect(connect, "localhost", "usr_empresa", "Empres@123", "db_empresa", 3306, NULL, 0);
    if (connect) {
        cout << "Conexion Exitosa!"<<endl;
    }
    else {
        cout << "Error en la conexion" << endl;
    }
    return 0; 
}
