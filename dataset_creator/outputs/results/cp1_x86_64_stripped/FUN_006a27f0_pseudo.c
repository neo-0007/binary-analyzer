
ulong FUN_006a27f0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = FUN_00625ba0(&DAT_00945558);
  uVar3 = 0;
  if ((uVar1 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar2 = *(long *)(*(long *)(*param_1 + 8) + uVar1 * 8), lVar2 != 0)) {
    lVar2 = FUN_006c2cc0(lVar2,&PTR_PTR_00933bc0,&PTR_PTR_00938bd0,0);
    uVar3 = CONCAT71((int7)(uVar3 >> 8),lVar2 != 0);
  }
  return uVar3 & 0xffffffff;
}

