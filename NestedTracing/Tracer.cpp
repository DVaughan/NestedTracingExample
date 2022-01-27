//import std.core;

//module NestedTracingModule;

//namespace NestedTracingExample
//{
//    class Tracer
//    {
//    private:
//        inline static unsigned int idCounter;
//        unsigned int id;
//        unsigned int parentId;
//    public:
//        Tracer(unsigned int parentId) : parentId(parentId)
//        {
//            id = ++idCounter;
//        }
//
//        Tracer CreateChild()
//        {
//            return Tracer{ id };
//        }
//
//        std::string WriteMessage(std::string message)
//        {
//            return std::format("id {} parent {}: {}", id, parentId, message);
//            //return "";
//        }
//    };
//}