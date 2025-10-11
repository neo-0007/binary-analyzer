
void __init_misc(undefined8 param_1,undefined8 *param_2)

{
  char *__s;
  char *pcVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    __s = (char *)*param_2;
    if (__s != (char *)0x0) {
      pcVar1 = rindex(__s,0x2f);
      program_invocation_short_name = __s;
      if (pcVar1 != (char *)0x0) {
        program_invocation_short_name = pcVar1 + 1;
      }
      program_invocation_name = (undefined *)*param_2;
    }
    return;
  }
  return;
}

