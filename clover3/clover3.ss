load_class object;
load_class int;
load_class bool;
load_class list_item;
load_class list;
load_class string;
load_class buffer;
load_class map;
load_class command;
load_class tuple1;
load_class tuple2;
load_class tuple3;
load_class tuple4;
load_class class;
load_class method;
load_class field;
load_class type;
load_class regex;
load_class system;
load_class void;

macro list {
ruby <<'EOS'
    params = [];
    param = "";
    dquort = false;
    squort = false;
    param_line = ENV['PARAMS'];
    n = 0;
    while(n < param_line.length()) do
        c = param_line[n];
        n = n + 1;

        if (dquort || squort) && c == "\\"
            param.concat(c);
            
            c = param_line[n];
            n = n + 1;

            param.concat(c);
        elsif c == "\""
            param.concat(c);
            dquort = !dquort
        elsif c == "'"
            param.concat(c);
            squort = !squort
        elsif dquort || squort
            param.concat(c);
        elsif c == ","
            if param.length() > 0
                params.push(param); param = ""
            end
        else
            param.concat(c);
        end
    end

    if param.length() != 0
        params.push(param);
    end

    if params.length() > 0
        print("lambda(");
        i = 0;
        while i < params.size()
            print("param#{i}:any");

            if i != params.size()-1
                print(",")
            end

            i = i + 1;
        end

        puts("):list<any> {");

        puts("var result = new list<any>();");

        i = 0;
        while i < params.size()
            puts("result.push_back(param#{i});");

            i = i + 1;
        end

        puts("result");
        print("}(");
        i = 0;
        while i < params.size()
            print("#{params[i]}");

            if i != params.size()-1
                print(",")
            end

            i = i + 1;
        end

        puts(")");
    end
EOS
}

macro map {
ruby <<'EOS'
    params = [];
    param = "";
    dquort = false;
    squort = false;
    param_line = ENV['PARAMS'];
    n = 0;
    while(n < param_line.length()) do
        c = param_line[n];
        n = n + 1;

        if (dquort || squort) && c == "\\"
            param.concat(c);
            
            c = param_line[n];
            n = n + 1;

            param.concat(c);
        elsif c == "\""
            param.concat(c);
            dquort = !dquort
        elsif c == "'"
            param.concat(c);
            squort = !squort
        elsif dquort || squort
            param.concat(c);
        elsif c == ","
            if param.length() > 0
                params.push(param); param = ""
            end
        else
            param.concat(c);
        end
    end

    if param.length() != 0
        params.push(param);
    end

    if params.length() > 0
        print("lambda(");
        i = 0;
        while i < params.size()
            print("param#{i}:any");

            if i != params.size()-1
                print(",")
            end

            i = i + 1;
        end

        puts("):map<any> {");

        puts("var result = new map();");

        i = 0;
        while i+1 < params.size()
            puts("result.insert(param#{i}, param#{i+1});");

            i = i + 2;
        end

        puts("result");
        print("}(");
        i = 0;
        while i < params.size()
            print("#{params[i]}");

            if i != params.size()-1
                print(",")
            end

            i = i + 1;
        end

        puts(")");
    end
EOS
}

macro tuple {
ruby <<'EOS'
    params = [];
    param = "";
    dquort = false;
    squort = false;
    param_line = ENV['PARAMS'];
    n = 0;
    while(n < param_line.length()) do
        c = param_line[n];
        n = n + 1;

        if (dquort || squort) && c == "\\"
            param.concat(c);
            
            c = param_line[n];
            n = n + 1;

            param.concat(c);
        elsif c == "\""
            param.concat(c);
            dquort = !dquort
        elsif c == "'"
            param.concat(c);
            squort = !squort
        elsif dquort || squort
            param.concat(c);
        elsif c == ","
            if param.length() > 0
                params.push(param); param = ""
            end
        else
            param.concat(c);
        end
    end

    if param.length() != 0
        params.push(param);
    end

    if params.length() > 0
        print("lambda(");
        i = 0;
        while i < params.size()
            print("param#{i}:any");

            if i != params.size()-1
                print(",")
            end

            i = i + 1;
        end

        if params.length() == 1
        then
            puts("):tuple1<any> {");

            puts("var result = new tuple1<any>();");
        end
        if params.length() == 2
        then
            puts("):tuple2<any,any> {");
            puts("var result = new tuple2<any,any>();");
        end
        if params.length() == 3
        then
            puts("):tuple3<any,any,any> {");
            puts("var result = new tuple3<any,any,any>();");
        end
        if params.length() == 4
        then
            puts("):tuple4<any,any,any,any> {");
            puts("var result = new tuple4<any,any,any,any>();");
        end

        i = 0;
        while i < params.size()
            puts("result.value#{i+1} = param#{i};");

            i = i + 1;
        end

        puts("result");
        print("}(");
        i = 0;
        while i < params.size()
            print("#{params[i]}");

            if i != params.size()-1
                print(",")
            end

            i = i + 1;
        end

        puts(")");
    end
EOS
}
