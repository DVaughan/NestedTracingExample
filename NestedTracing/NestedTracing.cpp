import NestedTracingModule;
import TracerModule;

import std.core;

using namespace NestedTracingExample;

void PerformTaskA(TracerBase& tracer)
{
    tracer.WriteMessage("TaskA");
}

void PerformTaskB(TracerBase& tracer)
{
    tracer.WriteMessage("TaskB");
}

int main()
{
    Tracer tracer{0};

    tracer.WriteMessage("First message from tracer.");

    PerformTaskA(*tracer.CreateChild());
    PerformTaskB(*tracer.CreateChild());
}




