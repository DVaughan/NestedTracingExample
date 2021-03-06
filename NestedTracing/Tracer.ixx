import std.core;
import NestedTracingModule;

export module TracerModule;

export namespace NestedTracingExample
{
    class Tracer : public TracerBase
    {
    public:
        Tracer(unsigned int parentId) : TracerBase(parentId)
        {
        }

        std::unique_ptr<TracerBase> CreateChild() override
        {
            // Copy or reference context. object.

            return std::make_unique<Tracer>(id);
        }
    };
}