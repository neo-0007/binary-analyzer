
int EVP_DigestSign(EVP_MD_CTX *param_1,uchar *param_2,size_t *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _func_1088 *p_Var1;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar2;
  size_t sVar3;
  
  p_Var1 = param_1->update;
  if ((((p_Var1 == (_func_1088 *)0x0) || (*(int *)p_Var1 != 0x80)) ||
      (*(long *)(p_Var1 + 0x30) == 0)) || (*(long *)(p_Var1 + 0x28) == 0)) {
    if ((*(long *)(p_Var1 + 0x78) != 0) &&
       (UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(p_Var1 + 0x78) + 0xd0),
       UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0052ce26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_3);
      return iVar2;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(p_Var1 + 0x28) + 0x80);
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
      sVar3 = 0;
      if (param_2 != (uchar *)0x0) {
        sVar3 = *param_3;
      }
                    /* WARNING: Could not recover jumptable at 0x0052ce9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE_00)
                        (*(long *)(p_Var1 + 0x30),param_2,param_3,sVar3,param_4,param_5);
      return iVar2;
    }
  }
  if (param_2 != (uchar *)0x0) {
    iVar2 = EVP_DigestSignUpdate(param_1,param_4,param_5);
    if (iVar2 < 1) {
      return 0;
    }
  }
  iVar2 = EVP_DigestSignFinal(param_1,param_2,param_3);
  return iVar2;
}

