
bool FUN_004ee450(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  
  if ((((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) || (param_2 == 0)) || (param_3 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_key.c",0x25f,"EC_KEY_set_public_key_affine_coordinates");
    FUN_0051f8f0(0x10,0xc0102,0);
    return false;
  }
  lVar2 = FUN_004b2a70(*(undefined8 *)(param_1 + 0x58));
  if (lVar2 == 0) {
    return false;
  }
  FUN_004b2c00(lVar2);
  lVar3 = FUN_004efb90(*(undefined8 *)(param_1 + 0x18));
  if (lVar3 != 0) {
    uVar4 = FUN_004b2df0(lVar2);
    lVar5 = FUN_004b2df0(lVar2);
    if (((lVar5 != 0) &&
        (iVar1 = FUN_004f0f80(*(undefined8 *)(param_1 + 0x18),lVar3,param_2,param_3,lVar2),
        iVar1 != 0)) &&
       (iVar1 = FUN_004f0d70(*(undefined8 *)(param_1 + 0x18),lVar3,uVar4,lVar5,lVar2), iVar1 != 0))
    {
      iVar1 = FUN_004b7840(param_2,uVar4);
      if ((iVar1 == 0) && (iVar1 = FUN_004b7840(param_3,lVar5), iVar1 == 0)) {
        iVar1 = FUN_004ee400(param_1,lVar3);
        if (iVar1 != 0) {
          iVar1 = FUN_004edb60(param_1);
          bVar6 = iVar1 != 0;
          goto LAB_004ee522;
        }
      }
      else {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_key.c",0x27b,"EC_KEY_set_public_key_affine_coordinates");
        FUN_0051f8f0(0x10,0x92,0);
      }
    }
  }
  bVar6 = false;
LAB_004ee522:
  FUN_004b2d50(lVar2);
  FUN_004b2b50(lVar2);
  FUN_004efcc0(lVar3);
  return bVar6;
}

