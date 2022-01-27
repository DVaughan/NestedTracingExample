import std.core;

export module NestedTracingModule;

export namespace NestedTracingExample
{
    class TracerBase
    {

    private:
        inline static unsigned int idCounter;

    protected:
        unsigned int id;
        unsigned int parentId;

    public:
        TracerBase(unsigned int parentId) : parentId(parentId)
        {
            id = ++idCounter;
        }

        virtual std::unique_ptr<TracerBase> CreateChild() = 0;

        void WriteMessage(std::string message)
        {
            std::string indent(parentId, ' ');
            std::cout << std::format("{}id {} parent {}: {}\n", indent, id, parentId, message);
        }

        ~TracerBase()
        {
            //std::string indent(parentId, ' ');
            //std::cout << std::format("{}Destroyed id {}\n", indent, id);
        }
    };


}

