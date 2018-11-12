# JWLibs

A C++ base library for myself.

## Name Rule

Name should be descriptive, and avoid abbreviation.

1. PorjectName
    > The project names start with a capital letter and have a capital letter for each new word, with no underscores. And the project files' basename should be same as the project name, and so on other relative names.

    - MyProject.vcxproj
    - MyProject.vcxproj.filter
    - MySolution.sln

2. FileName
    > Mostly, the FileName should be same as the ClassName

    - Header.h
    - Source.cpp

3. TypeName
    > Type name start with a capital letter and have a capital letter for each new word, with no underscores.

    ``` C++
    class MyClass;
    enum MyEnum;
    using FuctionTable = std::map<std::string, Func*>;
    ```

4. variable_name

    1. Common Variable
        > The variables names and the data members are all lowercase, with underscores between words.

        ```C++
        void func(int number = 0, long letter_size);
        std::string helloworld = "hello world!";
        ```

    2. const Variable
        > These variables start with a leading "k" and have a capital letter for each new word. And also could be with underscores between number letters.

        ```C++
        static const kPhysicalProcessorCount = 8;
        const kListSize = 10;
        const kOpenGL3_0_0 = 0x300;
        ```

    3. Struct data members
        > The data members of structs are named like the ordinary variables, no matter whether the variables is static, no static, const or a pointer.

        ```C++
        struct MyStruct
        {
            int x;
            int y;
            int width;
            int height;
            static std::string window_title;
            MyStruct *parent;
        }
        ```

    4. Class data members
        > The data members of class are start with "m_", the other rules are same as the ordinary variables.

        ```C++
        class MyClass
        {
        private:
            std::string m_window_title;
            static std::map<std::string, MyClass*> *m_table;
        }
        ```

5. functionName
    > The function name's first letter is lowercase, and have a capital letter for each new word.

    ```C++
    void addTable(Table *table);
    void setNewName(const Name &name);
    ```

6. namespacename
    > namespace names are all lowercase. Generally, the top-level namespace should be the solution name or the project name  (could be an abbreviation).

    ```C++
    namespace jw
    {
        namespace templatelibs
        {
        }
    }
    ```

7. MACRO_NAME
    > They should be all named with Capitals and underscores.

    ``` C++
    #define MY_MACRO nullptr
    #define MACRO(name) ##name
    ```

8. EnumName
    > Enumerators name start with a capital letter and have a capital letter for each new word, with underscores between words.

    ```C++
    enum MyEnum
    {
        AA_Name1 = 0x01,
        AA_Type2 = 0x02,
    }
    ```
