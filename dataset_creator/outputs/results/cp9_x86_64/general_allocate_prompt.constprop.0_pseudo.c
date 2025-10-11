
int * general_allocate_prompt_constprop_0
                (long param_1,int param_2,int param_3,int param_4,long param_5)

{
  int *piVar1;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ui/ui_lib.c",0x69,"general_allocate_prompt");
    ERR_set_error(0x28,0xc0102,0);
    piVar1 = (int *)0x0;
  }
  else if ((param_3 - 1U < 3) && (param_5 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/ui/ui_lib.c",0x6c,"general_allocate_prompt");
    ERR_set_error(0x28,0x69,0);
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)CRYPTO_zalloc(0x48,"../crypto/ui/ui_lib.c",0x6d);
    if (piVar1 != (int *)0x0) {
      *(long *)(piVar1 + 2) = param_1;
      piVar1[0x10] = param_2;
      piVar1[4] = param_4;
      *piVar1 = param_3;
      *(long *)(piVar1 + 6) = param_5;
    }
  }
  return piVar1;
}

