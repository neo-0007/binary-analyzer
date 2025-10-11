
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __resolv_conf_allocate_cold(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  
  _SUB_00000000 = *param_2;
  uRam0000000000000008 = param_2[1];
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

