
bool FUN_0050f100(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = 0;
  if ((param_4 == 0) && (lVar4 = FUN_004b2b20(param_1[0x15]), param_4 = lVar4, lVar4 == 0)) {
    return false;
  }
  FUN_004b2c00(param_4);
  lVar2 = FUN_004b2df0(param_4);
  if (lVar2 != 0) {
    do {
      iVar1 = FUN_004bb5a0(lVar2,param_1[8],0,param_4);
      if (iVar1 == 0) goto LAB_0050f16c;
      iVar1 = FUN_004b7ba0(lVar2);
    } while (iVar1 != 0);
    iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,lVar2,param_4);
    if (iVar1 != 0) {
      lVar3 = FUN_004b6c40(param_2,param_2,param_1[8],param_4);
      if (lVar3 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ecp_smpl.c",0x580,"ossl_ec_GFp_simple_field_inv");
        FUN_0051f8f0(0x10,0xa5,0);
        bVar5 = false;
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_2,lVar2,param_4);
        bVar5 = iVar1 != 0;
      }
      goto LAB_0050f16f;
    }
  }
LAB_0050f16c:
  bVar5 = false;
LAB_0050f16f:
  FUN_004b2d50(param_4);
  FUN_004b2b50(lVar4);
  return bVar5;
}

