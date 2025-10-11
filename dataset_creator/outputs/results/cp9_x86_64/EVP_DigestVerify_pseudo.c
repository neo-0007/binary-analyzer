
int EVP_DigestVerify(EVP_MD_CTX *param_1,uchar *param_2,size_t param_3,undefined8 param_4,
                    undefined8 param_5)

{
  _func_1088 *p_Var1;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar2;
  
  p_Var1 = param_1->update;
  if ((((p_Var1 == (_func_1088 *)0x0) || (*(int *)p_Var1 != 0x100)) ||
      (*(long *)(p_Var1 + 0x30) == 0)) || (*(long *)(p_Var1 + 0x28) == 0)) {
    if ((*(long *)(p_Var1 + 0x78) != 0) &&
       (UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(p_Var1 + 0x78) + 0xd8),
       UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0052d166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_3);
      return iVar2;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(p_Var1 + 0x28) + 0xa0);
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0052d1be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE_00)(*(long *)(p_Var1 + 0x30),param_2,param_3);
      return iVar2;
    }
  }
  iVar2 = EVP_DigestVerifyUpdate(param_1,param_4,param_5);
  if (0 < iVar2) {
    iVar2 = EVP_DigestVerifyFinal(param_1,param_2,param_3);
    return iVar2;
  }
  return -1;
}

