#include <iostream>
#include <string>

namespace microsoft
{
    std::string csharp()
    {
        return "C# is a programming language run on dotnet ecosystem";
    }

    std::string getGreeting(std::string name)
    {
        return "Hello " + name + " Nice to meet you";
    }
}

namespace google
{
    std::string dart()
    {
        return "Dart programming language is used to develop crossplatform apps with flutter";
    }
}

int main()
{
    using std::cout;
    using std::endl;
    using std::string;

    std::cout << microsoft::csharp() << std::endl;
    std::cout << microsoft::getGreeting("Chauhan Pruthviraj") << std::endl;

    using google::dart;

    std::cout << "what is Dart ? = " << dart() << std::endl;

    return 0;
}