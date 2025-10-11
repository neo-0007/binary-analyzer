
void FUN_0064ef10(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00625ba0(&DAT_00945358);
  if ((uVar1 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar2 = *(long *)(*(long *)(*param_1 + 8) + uVar1 * 8), lVar2 != 0)) {
    lVar2 = FUN_006c2cc0(lVar2,&PTR_PTR_00933bc0,&PTR_PTR_009353a0,0);
    if (lVar2 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00403c8b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403826();
}

