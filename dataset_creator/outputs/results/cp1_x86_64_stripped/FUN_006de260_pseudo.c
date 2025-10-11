
void FUN_006de260(long *param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar1 = *(int *)(lVar2 + 8);
    if (param_3 == lVar2) {
      if (0 < iVar1) {
        *(int *)(param_3 + 8) = iVar1 + -1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("obj->counter > 0","gconv_dl.c",0xa4,"do_release_shlib");
    }
    if (((iVar1 + 2U < 3) && (*(int *)(lVar2 + 8) = iVar1 + -1, iVar1 + -1 == -3)) &&
       (*(long *)(lVar2 + 0x10) != 0)) {
      FUN_0078e390();
      *(undefined8 *)(lVar2 + 0x10) = 0;
      return;
    }
  }
  return;
}

