
#ifdef MSGPACKC_EXPORTS
#define MSGPACKC_API __declspec(dllexport)
#else
#define MSGPACKC_API __declspec(dllimport)
#endif
