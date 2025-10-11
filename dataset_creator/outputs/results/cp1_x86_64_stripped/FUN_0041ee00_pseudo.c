
bool FUN_0041ee00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  lVar2 = FUN_00417730(param_2,0x12,&DAT_008de0c0);
  if (lVar2 != 0) {
    iVar1 = FUN_004222c0(*(undefined8 *)(lVar2 + 0x10));
    if (iVar1 != 0) {
      uVar3 = (**(code **)(lVar2 + 0x30))(param_1);
      *(undefined8 *)(lVar2 + 8) = param_1;
      lVar4 = FUN_00420f10(param_2,uVar3,1);
      if (lVar4 == 0) {
        lVar4 = FUN_00421190(param_2,uVar3,FUN_0041eca0,1);
        if (lVar4 != 0) {
          iVar1 = FUN_00420a00(lVar4,0,0);
          if (iVar1 != 0) {
            iVar1 = FUN_00421db0(lVar4,param_1);
            if (iVar1 != 0) {
              iVar1 = FUN_00421380(lVar4,0,0);
              if (iVar1 != 0) {
                bVar5 = true;
                goto LAB_0041ee80;
              }
            }
            FUN_00420b10(lVar4,0);
            FUN_00420d40(lVar4);
          }
        }
        bVar5 = false;
      }
      else {
        FUN_00420d40(lVar4);
        iVar1 = FUN_00420a00(lVar4,0,1);
        bVar5 = iVar1 != 0;
      }
LAB_0041ee80:
      FUN_004222e0(*(undefined8 *)(lVar2 + 0x10));
      return bVar5;
    }
  }
  return false;
}

