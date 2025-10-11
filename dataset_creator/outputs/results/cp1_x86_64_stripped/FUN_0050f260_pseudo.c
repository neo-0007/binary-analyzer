
int FUN_0050f260(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  FUN_004b2c00(param_3);
  uVar3 = FUN_004b2df0(param_3);
  lVar4 = FUN_004b2df0(param_3);
  if (lVar4 == 0) {
    FUN_0051f420();
    iVar2 = 0;
    FUN_0051f540("../crypto/ec/ecp_smpl.c",0x5a1,"ossl_ec_GFp_simple_blind_coordinates");
    FUN_0051f8f0(0x10,0xc0100,0);
  }
  else {
    do {
      FUN_0051f000();
      iVar2 = FUN_004bb5a0(uVar3,param_1[8],0,param_3);
      FUN_0051f050();
      if (iVar2 == 0) {
        iVar2 = 1;
        goto LAB_0050f2dd;
      }
      iVar1 = FUN_004b7ba0(uVar3);
    } while (iVar1 != 0);
    lVar5 = *param_1;
    if (*(code **)(lVar5 + 0x118) != (code *)0x0) {
      iVar1 = (**(code **)(lVar5 + 0x118))(param_1,uVar3,uVar3,param_3);
      if (iVar1 == 0) goto LAB_0050f2dd;
      lVar5 = *param_1;
    }
    iVar1 = (**(code **)(lVar5 + 0xf8))
                      (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),uVar3
                       ,param_3);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x100))(param_1,lVar4,uVar3,param_3);
      if (iVar1 != 0) {
        iVar1 = (**(code **)(*param_1 + 0xf8))
                          (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                           lVar4,param_3);
        if (iVar1 != 0) {
          iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,lVar4,lVar4,uVar3,param_3);
          if (iVar1 != 0) {
            iVar1 = (**(code **)(*param_1 + 0xf8))
                              (param_1,*(undefined8 *)(param_2 + 0x18),
                               *(undefined8 *)(param_2 + 0x18),lVar4,param_3);
            if (iVar1 != 0) {
              *(undefined4 *)(param_2 + 0x28) = 0;
              iVar2 = 1;
            }
          }
        }
      }
    }
  }
LAB_0050f2dd:
  FUN_004b2d50(param_3);
  return iVar2;
}

