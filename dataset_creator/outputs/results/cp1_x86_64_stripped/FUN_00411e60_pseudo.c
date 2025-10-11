
int FUN_00411e60(byte *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_40;
  undefined1 local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (undefined8 *)0x0) {
    iVar3 = -1;
    goto LAB_00411f41;
  }
  pbVar5 = param_1;
  if (param_1 == (byte *)0x0) {
LAB_00411fdb:
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/pmeth_gn.c",0xf4,"EVP_PKEY_generate");
    iVar3 = -2;
    FUN_0051f8f0(6,0x96,0);
LAB_00411f2c:
    if (pbVar5 != (byte *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if ((*param_1 & 6) != 0) {
      pbVar5 = (byte *)0x0;
      pbVar6 = (byte *)*param_2;
      if ((byte *)*param_2 == (byte *)0x0) {
        pbVar5 = (byte *)FUN_0040ec60();
        *param_2 = pbVar5;
        pbVar6 = pbVar5;
        if (pbVar5 == (byte *)0x0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/pmeth_gn.c",0x94,"EVP_PKEY_generate");
          iVar3 = -1;
          FUN_0051f8f0(6,0xc0100,0);
          goto LAB_00411f41;
        }
      }
      lVar4 = *(long *)(param_1 + 0x28);
      lVar1 = *(long *)(param_1 + 0x88);
      if (lVar4 == 0) {
        if ((lVar1 == 0) || (*(long *)(lVar1 + 0x60) == 0)) {
          if (*(int *)param_1 == 2) {
            iVar3 = (**(code **)(*(long *)(param_1 + 0x78) + 0x28))(param_1);
          }
          else {
            if (*(int *)param_1 != 4) goto LAB_00411fdb;
            iVar3 = (**(code **)(*(long *)(param_1 + 0x78) + 0x38))(param_1);
          }
          if (0 < iVar3) goto LAB_00411f41;
        }
        else {
          FUN_0051f420(lVar1,pbVar6);
          iVar3 = -1;
          FUN_0051f540("../crypto/evp/pmeth_gn.c",0xfd,"EVP_PKEY_generate");
          FUN_0051f8f0(6,0xcc,0);
        }
      }
      else {
        param_1[0x70] = 2;
        param_1[0x71] = 0;
        param_1[0x72] = 0;
        param_1[0x73] = 0;
        lVar7 = *(long *)(param_1 + 0x20);
        *(undefined1 **)(param_1 + 0x68) = local_38;
        if (lVar1 == 0) {
LAB_00411f70:
          lVar4 = FUN_0053de10(*param_2,lVar7,lVar4,FUN_00411d30,param_1);
          if (lVar4 != 0) {
            param_1[0x68] = 0;
            param_1[0x69] = 0;
            param_1[0x6a] = 0;
            param_1[0x6b] = 0;
            param_1[0x6c] = 0;
            param_1[0x6d] = 0;
            param_1[0x6e] = 0;
            param_1[0x6f] = 0;
            iVar3 = 1;
            FUN_0040eda0(*param_2);
            *(undefined4 *)*param_2 = *(undefined4 *)(param_1 + 0x74);
            goto LAB_00411f41;
          }
        }
        else {
          local_40 = lVar7;
          FUN_0040fbe0(lVar1,*(undefined8 *)(param_1 + 8),&local_40,*(undefined8 *)(param_1 + 0x10))
          ;
          if (local_40 == 0) goto LAB_00411fdb;
          iVar3 = FUN_0053e830(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
          if (iVar3 != 0) {
            lVar4 = *(long *)(param_1 + 0x28);
            lVar7 = *(long *)(param_1 + 0x20);
            goto LAB_00411f70;
          }
        }
        puVar2 = (undefined4 *)*param_2;
        param_1[0x68] = 0;
        param_1[0x69] = 0;
        param_1[0x6a] = 0;
        param_1[0x6b] = 0;
        param_1[0x6c] = 0;
        param_1[0x6d] = 0;
        param_1[0x6e] = 0;
        param_1[0x6f] = 0;
        iVar3 = 0;
        *puVar2 = *(undefined4 *)(param_1 + 0x74);
      }
      goto LAB_00411f2c;
    }
    FUN_0051f420();
    pbVar5 = (byte *)0x0;
    iVar3 = -1;
    FUN_0051f540("../crypto/evp/pmeth_gn.c",0xf8,"EVP_PKEY_generate");
    FUN_0051f8f0(6,0x97,0);
  }
  FUN_0040f4f0(pbVar5);
LAB_00411f41:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar3;
}

