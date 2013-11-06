#ifndef CPROPSTORELIB_H
#define CPROPSTORELIB_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILDING_DLL
#define DECLSPEC __declspec(dllexport)
#else
#define DECLSPEC __declspec(dllimport)
#endif

// Gets value of parameter with key "key"
//  value is stored on pointer "value"
//  returns 0 on success, otherwise error code:
//      0x80 - open file error
//      0x40 - parse file line errror
//      0x08 - key not found
unsigned char __stdcall DECLSPEC getProperty (unsigned char key, signed int *value);

#ifdef __cplusplus
}
#endif

#endif // CPROPSTORELIB_H
