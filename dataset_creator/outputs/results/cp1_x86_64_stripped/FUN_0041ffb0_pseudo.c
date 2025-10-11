
int FUN_0041ffb0(byte *param_1,byte param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != (byte *)0x0) {
    lVar4 = FUN_00417730(*(undefined8 *)(param_1 + 0x50),1,&DAT_008de180);
    if (lVar4 == 0) {
      FUN_0051f420();
      bVar1 = false;
      FUN_0051f540("../crypto/provider_core.c",0x154,"get_provider_store");
      FUN_0051f8f0(0xf,0xc0103,0);
      iVar2 = *(int *)(param_1 + 0x20) + -1;
      if (1 < *(int *)(param_1 + 0x20)) {
        *(int *)(param_1 + 0x20) = iVar2;
        bVar6 = param_2 & 1 & param_1[200];
LAB_004200eb:
        if (bVar6 == 0) {
          return iVar2;
        }
        FUN_0041f1e0(param_1,1);
        return iVar2;
      }
LAB_00420028:
      *(int *)(param_1 + 0x20) = iVar2;
      if ((((iVar2 < 1) && (*param_1 = *param_1 & 0xfd, param_3 != 0)) && (lVar4 != 0)) &&
         (iVar3 = FUN_00436480(*(undefined8 *)(lVar4 + 0x10)), 0 < iVar3)) {
        iVar7 = 0;
        do {
          iVar8 = iVar7 + 1;
          lVar5 = FUN_004364a0(*(undefined8 *)(lVar4 + 0x10),iVar7);
          (**(code **)(lVar5 + 0x10))(param_1,*(undefined8 *)(lVar5 + 0x20));
          iVar7 = iVar8;
        } while (iVar8 != iVar3);
      }
      if (!bVar1) {
        return iVar2;
      }
      FUN_004222e0(*(undefined8 *)(param_1 + 8));
      FUN_004222e0(*(undefined8 *)(lVar4 + 0x20));
      return iVar2;
    }
    iVar2 = FUN_004222a0(*(undefined8 *)(lVar4 + 0x20));
    if (iVar2 != 0) {
      iVar2 = FUN_004222c0(*(undefined8 *)(param_1 + 8));
      if (iVar2 != 0) {
        bVar1 = true;
        iVar2 = *(int *)(param_1 + 0x20) + -1;
        if (1 < *(int *)(param_1 + 0x20)) {
          *(int *)(param_1 + 0x20) = iVar2;
          bVar6 = param_2 & 1 & param_1[200];
          FUN_004222e0(*(undefined8 *)(param_1 + 8));
          FUN_004222e0(*(undefined8 *)(lVar4 + 0x20));
          goto LAB_004200eb;
        }
        goto LAB_00420028;
      }
      FUN_004222e0(*(undefined8 *)(lVar4 + 0x20));
    }
  }
  return -1;
}

