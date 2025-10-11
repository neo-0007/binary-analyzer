
/* (anonymous namespace)::fopen_mode(std::_Ios_Openmode) */

char * (anonymous_namespace)::fopen_mode(uint param_1)

{
  switch(param_1 & 0x3d) {
  default:
    return (char *)0x0;
  case 1:
  case 0x11:
    return "a";
  case 5:
  case 0x15:
    return "ab";
  case 8:
    return "r";
  case 9:
  case 0x19:
    return "a+";
  case 0xc:
    return "rb";
  case 0xd:
  case 0x1d:
    return "a+b";
  case 0x10:
  case 0x30:
    return "w";
  case 0x14:
  case 0x34:
    return "wb";
  case 0x18:
    return "r+";
  case 0x1c:
    return "r+b";
  case 0x38:
    return "w+";
  case 0x3c:
    return "w+b";
  }
}

