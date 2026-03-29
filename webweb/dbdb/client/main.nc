#include <neo-c.h>
#include <neo-c-net.h>
#include <stdint.h>

int main(int argc, char** argv)
{
    int n = 0;
    client_socket(port:3366) {
        char* messages[] = { 
            "show databases",
            "CREATE DATABASE testdb", 
            "CREATE DATABASE IF NOT EXISTS testdb",
            "show databases",
            "use testdb", 
            "CREATE TABLE IF NOT EXISTS meal(id INT AUTO_INCREMENT PRIMARY KEY, morning VARCHAR(100) NOT NULL, lunch VARCHAR(100) NOT NULL, dinner VARCHAR(100) NOT NULL)", "show tables", 
            "DESCRIBE meal",
            "show tables", 
            "INSERT INTO meal(morning, lunch, dinner) VALUES ('PAN', 'UDON', 'PASTA')", 
            "INSERT INTO meal(morning, lunch, dinner) VALUES ('ONIGIRI', 'KARAAGE', 'SHAKE')", 
            "UPDATE meal SET lunch='RAMEN', dinner='CURRY' WHERE morning = 'PAN'",
            "SELECT * FROM meal WHERE lunch = 'RAMEN'",
            "SELECT COUNT(*) FROM meal",
            "SELECT * FROM meal WHERE lunch NOT IN ('KARAAGE', 'SHAKE')", 
            "CREATE TABLE IF NOT EXISTS meal_time(id INT AUTO_INCREMENT PRIMARY KEY, username VARCHAR(100), morning VARCHAR(100), lunch VARCHAR(100), dinner VARCHAR(100))", 
            "INSERT INTO meal_time(username, morning, lunch, dinner) VALUES ('ab25cq', '030000', '120000', '180000')", 
            "INSERT INTO meal_time(username, morning, lunch, dinner) VALUES ('ab25cq', '090000', '150000', '220000')", 
            "INSERT INTO meal_time(username, morning, lunch, dinner) VALUES ('HASEGAWA', '090000', '150000', '220000')", 
            "CREATE TABLE IF NOT EXISTS users(id INT AUTO_INCREMENT PRIMARY KEY, username VARCHAR(100), role VARCHAR(100))",
            "INSERT INTO users(username, role) VALUES ('ab25cq', 'DEV')",
            "INSERT INTO users(username, role) VALUES ('HASEGAWA', 'ADMIN')",
            "SELECT * FROM meal_time WHERE lunch BETWEEN 120000 AND 140000", 
            "SELECT * FROM meal WHERE lunch LIKE 'U%'",
            "SELECT * FROM meal WHERE lunch NOT LIKE 'U%'",
            "SELECT AVG(lunch) FROM meal_time WHERE username = 'ab25cq'",
            "SELECT meal_time.username,users.role FROM meal_time INNER JOIN users ON meal_time.username = users.username ORDER BY meal_time.username ASC LIMIT 3",
            "SELECT meal_time.username,users.role FROM meal_time INNER JOIN users ON meal_time.username = users.username WHERE users.role = 'DEV' ORDER BY meal_time.lunch ASC LIMIT 2",
            "SELECT users.role,COUNT(*) FROM meal_time INNER JOIN users ON meal_time.username = users.username GROUP BY users.role ORDER BY users.role ASC",
            "SELECT users.role,COUNT(*) FROM meal_time INNER JOIN users ON meal_time.username = users.username GROUP BY users.role HAVING COUNT(*) > 1 ORDER BY users.role ASC",
            "SELECT username, COUNT(*) FROM meal_time GROUP BY username ORDER BY username ASC",
            "SELECT username, COUNT(*) FROM meal_time GROUP BY username HAVING COUNT(*) > 1 ORDER BY username ASC",
            "SELECT username, SUM(lunch) FROM meal_time GROUP BY username ORDER BY username DESC",
            "SELECT username, AVG(lunch) FROM meal_time GROUP BY username ORDER BY username ASC",
            "SELECT username, AVG(lunch) FROM meal_time GROUP BY username HAVING AVG(lunch) >= 135000 ORDER BY username ASC",
            "SELECT * FROM meal_time ORDER BY lunch DESC LIMIT 2",
            "SELECT MAX(lunch),username FROM meal_time WHERE username = 'ab25cq'",
            "SELECT MIN(lunch),username FROM meal_time WHERE username = 'ab25cq'",
            "SELECT SUM(lunch) FROM meal_time WHERE username = 'ab25cq'",
            "ALTER TABLE meal ADD COLUMN snack VARCHAR(100)",
            "DESCRIBE meal",
            "UPDATE meal SET snack='COOKIE' WHERE morning = 'PAN'",
            "SELECT morning,snack FROM meal ORDER BY morning ASC",
            "ALTER TABLE meal RENAME COLUMN snack TO dessert",
            "DESCRIBE meal",
            "SELECT morning,dessert FROM meal ORDER BY morning ASC",
            "ALTER TABLE users RENAME TO accounts",
            "show tables",
            "SELECT accounts.username,accounts.role FROM accounts ORDER BY accounts.username ASC",
            "CREATE TABLE IF NOT EXISTS prefs(id INT AUTO_INCREMENT PRIMARY KEY, username VARCHAR(100), theme VARCHAR(100))",
            "INSERT INTO prefs(username, theme) VALUES ('ab25cq', 'dark')",
            "SELECT accounts.username,prefs.theme FROM accounts LEFT JOIN prefs ON accounts.username = prefs.username ORDER BY accounts.username ASC",
            "SELECT accounts.username,prefs.theme FROM accounts LEFT JOIN prefs ON accounts.username = prefs.username WHERE prefs.theme = 'dark' ORDER BY accounts.username ASC",
            "SELECT accounts.username,prefs.theme FROM accounts LEFT JOIN prefs ON accounts.username = prefs.username WHERE prefs.theme IS NULL ORDER BY accounts.username ASC",
            "CREATE TABLE IF NOT EXISTS settings(id INT AUTO_INCREMENT PRIMARY KEY, username VARCHAR(100) DEFAULT guest, theme VARCHAR(100) DEFAULT light, enabled VARCHAR(100) DEFAULT on)",
            "INSERT INTO settings(username) VALUES ('alice')",
            "INSERT INTO settings(username, theme, enabled) VALUES ('bob', DEFAULT, DEFAULT)",
            "ALTER TABLE settings ADD COLUMN locale VARCHAR(100) DEFAULT ja_JP",
            "INSERT INTO settings(username, locale) VALUES ('carol', DEFAULT)",
            "INSERT INTO settings VALUES (DEFAULT, 'dave', DEFAULT, DEFAULT, DEFAULT)",
            "SELECT username,theme,enabled,locale FROM settings ORDER BY username ASC",
            "CREATE TABLE IF NOT EXISTS nullable_items(id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(100) NOT NULL, note VARCHAR(100) DEFAULT NULL)",
            "DESCRIBE nullable_items",
            "INSERT INTO nullable_items(name) VALUES ('foo')",
            "INSERT INTO nullable_items VALUES (DEFAULT, 'bar', NULL)",
            "INSERT INTO nullable_items(name, note) VALUES ('baz', 'memo')",
            "SELECT name,note FROM nullable_items WHERE note IS NULL ORDER BY name ASC",
            "SELECT name,note FROM nullable_items WHERE note IS NOT NULL ORDER BY name ASC",
            "ALTER TABLE nullable_items ADD COLUMN flag VARCHAR(100) DEFAULT NULL",
            "SELECT name,flag FROM nullable_items WHERE flag IS NULL ORDER BY name ASC LIMIT 2",
            "ALTER TABLE meal DROP COLUMN dessert",
            "DESCRIBE meal",
            "DELETE FROM meal WHERE morning = 'ONIGIRI'",
            "SELECT * FROM meal ORDER BY morning DESC LIMIT 1",
            "DROP TABLE IF EXISTS meal_time",
            "show tables",
            "DROP DATABASE IF EXISTS testdb",
            "show databases",
            "exit", 
            NULL
        };
        
        char buf[1024] = {0};
        
        char* message = messages[n];
puts(message);
        write(it, message, strlen(message));
        int size = read(it, buf, 1023);
        buf[size] = '\0';
        
        printf("%s", buf);
        
        n++;
        
        if(messages[n] == NULL) {
            *it2 = true;
            return;
        }
    }
}
