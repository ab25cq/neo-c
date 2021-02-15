load_class Data;
load_class class;

var klass = new class("Data");

klass.all_fields().each {
    echo(it.name());
}
