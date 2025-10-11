
void FUN_0041a7b0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  iVar3 = FUN_00422340(&DAT_0093fc8c,FUN_0041a650);
  lVar2 = DAT_0093fc90;
  if (((iVar3 != 0) && (DAT_0093fc88 != 0)) && (DAT_0093fc90 != 0)) {
    iVar3 = FUN_004222c0(*(undefined8 *)(DAT_0093fc90 + 8));
    if (iVar3 != 0) {
      lVar5 = *param_2;
      lVar4 = 0;
      while (lVar6 = lVar5, lVar5 != 0) {
        while ((param_1 != 0 && (param_1 != *(long *)(lVar6 + 8)))) {
          plVar1 = (long *)(lVar6 + 0x18);
          lVar4 = lVar6;
          lVar6 = *plVar1;
          if (*plVar1 == 0) goto LAB_0041a82f;
        }
        (**(code **)(lVar6 + 0x10))();
        if (lVar4 == 0) {
          *param_2 = *(long *)(lVar6 + 0x18);
        }
        else {
          *(long *)(lVar4 + 0x18) = *(long *)(lVar6 + 0x18);
        }
        lVar5 = *(long *)(lVar6 + 0x18);
        FUN_0041ad60(lVar6,"../crypto/initthread.c",0x159);
      }
LAB_0041a82f:
      FUN_004222e0(*(undefined8 *)(lVar2 + 8));
      return;
    }
  }
  return;
}

