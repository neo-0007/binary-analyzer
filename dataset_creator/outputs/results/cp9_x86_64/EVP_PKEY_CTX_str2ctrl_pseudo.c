
undefined8 EVP_PKEY_CTX_str2ctrl(long param_1,undefined4 param_2,char *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_3);
  if (sVar1 < 0x80000000) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x78) + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00413ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (param_1,param_2,sVar1 & 0xffffffff,param_3,UNRECOVERED_JUMPTABLE);
    return uVar2;
  }
  return 0xffffffff;
}

