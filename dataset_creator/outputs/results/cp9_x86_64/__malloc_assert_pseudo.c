
void __malloc_assert(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char *pcVar1;
  
  pcVar1 = "";
  if (*program_invocation_short_name != '\0') {
    pcVar1 = ": ";
  }
  __fxprintf(0,"%s%s%s:%u: %s%sAssertion `%s\' failed.\n",program_invocation_short_name,pcVar1,
             param_2,param_3,param_4,": ",param_1);
  fflush((FILE *)stderr);
                    /* WARNING: Subroutine does not return */
  abort();
}

