
int EVP_DigestUpdate(EVP_MD_CTX *ctx,void *d,size_t cnt)

{
  _func_1088 *p_Var1;
  ENGINE *pEVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (cnt == 0) {
    return 1;
  }
  p_Var1 = ctx->update;
  if (p_Var1 != (_func_1088 *)0x0) {
    iVar3 = *(int *)p_Var1;
    if ((((iVar3 - 0x40U & 0xffffffbf) == 0 || (iVar3 - 0x10U & 0xffffffef) == 0) ||
        (iVar3 == 0x100)) && (*(long *)(p_Var1 + 0x30) != 0)) {
      if (iVar3 == 0x80) {
        iVar3 = EVP_DigestSignUpdate();
        return iVar3;
      }
      if (iVar3 == 0x100) {
        iVar3 = EVP_DigestVerifyUpdate();
        return iVar3;
      }
      ERR_new();
      uVar4 = 0x18b;
      goto LAB_005183c5;
    }
  }
  pEVar2 = ctx->engine;
  if (((pEVar2 == (ENGINE *)0x0) || (*(long *)(pEVar2 + 0x70) == 0)) ||
     (((ulong)ctx->md_data & 0x100) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00518428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (*(code *)ctx[1].digest)();
    return iVar3;
  }
  if (*(code **)(pEVar2 + 0x98) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051841a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(pEVar2 + 0x98))(ctx[1].engine);
    return iVar3;
  }
  ERR_new();
  uVar4 = 0x195;
LAB_005183c5:
  ERR_set_debug("../crypto/evp/digest.c",uVar4,"EVP_DigestUpdate");
  ERR_set_error(6,0xbd,0);
  return 0;
}

