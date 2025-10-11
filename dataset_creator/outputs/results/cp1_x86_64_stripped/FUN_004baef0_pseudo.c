
bool FUN_004baef0(int param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  sbyte sVar7;
  byte bVar8;
  uint uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  byte local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = FUN_004b2fd0(param_7);
  if (param_3 == 0) {
    if ((param_4 == -1) && (param_5 == 0)) {
      FUN_004b7b50(param_2);
      bVar10 = true;
      goto LAB_004baf6f;
    }
  }
  else if ((-1 < param_3) && ((param_3 != 1 || (param_4 < 1)))) {
    iVar1 = param_3 + 7 >> 3;
    lVar4 = (long)iVar1;
    pbVar5 = (byte *)FUN_0041ad90(lVar4,"../crypto/bn/bn_rand.c",0x2b);
    if (pbVar5 == (byte *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bn/bn_rand.c",0x2d,"bnrand");
      FUN_0051f8f0(3,0xc0100,0);
      bVar10 = false;
    }
    else {
      if (param_1 == 0) {
        iVar2 = FUN_00429580();
        if (iVar2 < 1) {
LAB_004bb133:
          bVar10 = false;
          goto LAB_004bb135;
        }
      }
      else {
        iVar2 = FUN_00429760(uVar3,pbVar5,lVar4,param_6);
        if (iVar2 < 1) goto LAB_004bb133;
        if (param_1 == 1) {
          lVar6 = 0;
          do {
            iVar2 = FUN_00429580(uVar3,&local_41,1,param_6);
            if (iVar2 < 1) goto LAB_004bb133;
            if ((char)local_41 < '\0') {
              if (lVar6 != 0) {
                pbVar5[lVar6] = pbVar5[lVar6 + -1];
              }
            }
            else if (local_41 < 0x2a) {
              pbVar5[lVar6] = 0;
            }
            else if (local_41 < 0x54) {
              pbVar5[lVar6] = 0xff;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != lVar4);
        }
      }
      uVar9 = param_3 - 1U & 7;
      sVar7 = (sbyte)uVar9;
      if (param_4 < 0) {
        bVar8 = *pbVar5;
      }
      else if (param_4 == 0) {
        bVar8 = (byte)(1 << sVar7) | *pbVar5;
      }
      else if (uVar9 == 0) {
        pbVar5[1] = pbVar5[1] | 0x80;
        bVar8 = 1;
      }
      else {
        bVar8 = (byte)(3 << (sVar7 - 1U & 0x1f)) | *pbVar5;
      }
      *pbVar5 = ~(byte)(0xff << sVar7 + 1) & bVar8;
      if (param_5 != 0) {
        pbVar5[lVar4 + -1] = pbVar5[lVar4 + -1] | 1;
      }
      lVar6 = FUN_004b84d0(pbVar5,iVar1,param_2);
      bVar10 = lVar6 != 0;
    }
LAB_004bb135:
    FUN_0041aef0(pbVar5,lVar4,"../crypto/bn/bn_rand.c",0x5d);
    goto LAB_004baf6f;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/bn/bn_rand.c",0x62,"bnrand");
  FUN_0051f8f0(3,0x76,0);
  bVar10 = false;
LAB_004baf6f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar10;
}

