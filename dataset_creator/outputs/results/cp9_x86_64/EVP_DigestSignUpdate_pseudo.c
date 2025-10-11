
int EVP_DigestSignUpdate(EVP_MD_CTX *param_1,void *param_2,size_t param_3)

{
  _func_1088 *p_Var1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  p_Var1 = param_1->update;
  if (p_Var1 != (_func_1088 *)0x0) {
    if (((*(int *)p_Var1 == 0x80) && (*(long *)(p_Var1 + 0x30) != 0)) &&
       (*(long *)(p_Var1 + 0x28) != 0)) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(p_Var1 + 0x28) + 0x70);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/m_sigver.c",0x1a2,"EVP_DigestSignUpdate");
        ERR_set_error(6,0xc0101,0);
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0052c886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE)();
      return iVar2;
    }
    if ((((byte)p_Var1[0xa0] & 1) != 0) &&
       (iVar2 = (**(code **)(*(long *)(p_Var1 + 0x78) + 0xf8))(p_Var1,param_1), iVar2 == 0)) {
      return 0;
    }
    p_Var1[0xa0] = (_func_1088)((byte)p_Var1[0xa0] & 0xfe);
  }
  iVar2 = EVP_DigestUpdate(param_1,param_2,param_3);
  return iVar2;
}

