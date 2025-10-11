
void FUN_0070bf60(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char *pcVar1;
  
  pcVar1 = "";
  if (*PTR_DAT_0093ea18 != '\0') {
    pcVar1 = ": ";
  }
  FUN_006fcea0(0,"%s%s%s:%u: %s%sAssertion `%s\' failed.\n",PTR_DAT_0093ea18,pcVar1,param_2,param_3,
               param_4,": ",param_1);
  FUN_006fd670(PTR_DAT_0093e068);
                    /* WARNING: Subroutine does not return */
  FUN_00404713();
}

