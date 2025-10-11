
int mem_write(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  undefined8 uVar2;
  BIO_METHOD *pBVar3;
  _func_603 *p_Var4;
  int iVar5;
  char *pcVar6;
  _func_596 *p_Var7;
  int iVar8;
  undefined4 extraout_var;
  
  pbVar1 = param_1->prev_bio;
  if (((ulong)param_1->ptr & 0x200) == 0) {
    BIO_clear_flags(param_1,0xf);
    if (param_3 != 0) {
      if (param_2 == (void *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/bio/bss_mem.c",0xe4,"mem_write");
        param_3 = -1;
        ERR_set_error(0x20,0xc0102,0);
      }
      else {
        uVar2 = *(undefined8 *)pbVar1->callback;
        if (param_1->num != 0) {
          mem_buf_sync_part_0_isra_0(param_1->prev_bio);
        }
        iVar5 = (int)uVar2;
        iVar8 = BUF_MEM_grow_clean((BUF_MEM *)pbVar1->method,(long)(param_3 + iVar5));
        if (CONCAT44(extraout_var,iVar8) == 0) {
          param_3 = -1;
        }
        else {
          memcpy(pbVar1->method->name + iVar5,param_2,(long)param_3);
          pBVar3 = pbVar1->method;
          p_Var4 = pbVar1->callback;
          pcVar6 = pBVar3->name;
          *(undefined8 *)p_Var4 = *(undefined8 *)pBVar3;
          *(char **)(p_Var4 + 8) = pcVar6;
          p_Var7 = pBVar3->bread;
          *(_func_595 **)(p_Var4 + 0x10) = pBVar3->bwrite;
          *(_func_596 **)(p_Var4 + 0x18) = p_Var7;
        }
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/bio/bss_mem.c",0xdd,"mem_write");
    param_3 = -1;
    ERR_set_error(0x20,0x7e,0);
  }
  return param_3;
}

