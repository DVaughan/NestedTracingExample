import NestedTracingModule;
import TracerModule;

import std.core;

using namespace NestedTracingExample;

void PerformTaskA(TracerBase& tracer)
{
    tracer.WriteMessage("Task A");
}

void PerformTaskC(TracerBase& tracer)
{
    tracer.WriteMessage("Task C");
}

void PerformTaskB(TracerBase& tracer)
{
    tracer.WriteMessage("Task B");
    PerformTaskC(*tracer.CreateChild());
}



int main()
{
    Tracer tracer{0};

    tracer.WriteMessage("First message from tracer.");

    PerformTaskA(*tracer.CreateChild());
    PerformTaskB(*tracer.CreateChild());
}




