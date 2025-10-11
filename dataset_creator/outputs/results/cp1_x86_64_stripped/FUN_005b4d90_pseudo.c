
uint FUN_005b4d90(undefined8 *param_1,long param_2,uint param_3,int param_4,ulong param_5,
                 long param_6,long param_7)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  uint uVar8;
  long in_FS_OFFSET;
  ulong local_60 [2];
  uint local_4c;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  local_60[0] = param_5;
  if (param_3 == 0xffffffff) {
    param_3 = thunk_FUN_007129d0(param_2);
  }
  if (local_60[0] == 0) {
    local_60[0] = 0x2806;
  }
  if ((int)param_3 < 0) {
LAB_005b50e0:
    uVar8 = 0xffffffff;
    goto LAB_005b4f7d;
  }
  if (param_4 == 0x1002) {
    if ((param_3 & 1) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_mbstr.c",0x42,"ASN1_mbstring_ncopy");
      uVar8 = 0xffffffff;
      FUN_0051f8f0(0xd,0x81,0);
      goto LAB_005b4f7d;
    }
    uVar4 = (int)param_3 >> 1;
  }
  else if (param_4 < 0x1003) {
    if (param_4 == 0x1000) {
      uVar4 = 0;
      if (param_3 != 0) {
        uVar4 = 0;
        lVar7 = param_2;
        uVar8 = param_3;
        do {
          iVar2 = FUN_005b8770(lVar7,uVar8,&local_48);
          if (iVar2 < 0) {
LAB_005b50b0:
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/a_mbstr.c",0x55,"ASN1_mbstring_ncopy");
            FUN_0051f8f0(0xd,0x86,0);
            goto LAB_005b50e0;
          }
          uVar8 = uVar8 - iVar2;
          lVar7 = lVar7 + iVar2;
          if ((0x10ffff < local_48) || (local_48 - 0xd800 < 0x800)) goto LAB_005b50b0;
          uVar4 = uVar4 + 1;
        } while (uVar8 != 0);
      }
    }
    else {
      uVar4 = param_3;
      if (param_4 != 0x1001) goto LAB_005b5110;
    }
  }
  else {
    if (param_4 != 0x1004) {
LAB_005b5110:
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_mbstr.c",0x5f,"ASN1_mbstring_ncopy");
      uVar8 = 0xffffffff;
      FUN_0051f8f0(0xd,0xa0,0);
      goto LAB_005b4f7d;
    }
    if ((param_3 & 3) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_mbstr.c",0x4a,"ASN1_mbstring_ncopy");
      uVar8 = 0xffffffff;
      FUN_0051f8f0(0xd,0x85,0);
      goto LAB_005b4f7d;
    }
    uVar4 = (int)param_3 >> 2;
  }
  if ((0 < param_6) && ((int)uVar4 < param_6)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_mbstr.c",100,"ASN1_mbstring_ncopy");
    uVar8 = 0xffffffff;
    FUN_0051f8f0(0xd,0x98,"minsize=%ld",param_6);
    goto LAB_005b4f7d;
  }
  if ((0 < param_7) && (param_7 < (int)uVar4)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_mbstr.c",0x6a,"ASN1_mbstring_ncopy");
    uVar8 = 0xffffffff;
    FUN_0051f8f0(0xd,0x97,"maxsize=%ld",param_7);
    goto LAB_005b4f7d;
  }
  iVar2 = FUN_005b4c90(param_2,param_3,param_4,FUN_005b4b70,local_60);
  if (iVar2 < 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_mbstr.c",0x71,"ASN1_mbstring_ncopy");
    uVar8 = 0xffffffff;
    FUN_0051f8f0(0xd,0x7c,0);
    goto LAB_005b4f7d;
  }
  if ((local_60[0] & 1) == 0) {
    if ((local_60[0] & 2) == 0) {
      if ((local_60[0] & 0x10) == 0) {
        if ((local_60[0] & 4) == 0) {
          if ((local_60[0] & 0x800) == 0) {
            iVar2 = (-(uint)((local_60[0] & 0x100) == 0) & 0xfffffffc) + 0x1004;
            uVar8 = (-(uint)((local_60[0] & 0x100) == 0) & 0xfffffff0) + 0x1c;
          }
          else {
            iVar2 = 0x1002;
            uVar8 = 0x1e;
          }
        }
        else {
          iVar2 = 0x1001;
          uVar8 = 0x14;
        }
      }
      else {
        iVar2 = 0x1001;
        uVar8 = 0x16;
      }
    }
    else {
      iVar2 = 0x1001;
      uVar8 = 0x13;
    }
  }
  else {
    iVar2 = 0x1001;
    uVar8 = 0x12;
  }
  if (param_1 == (undefined8 *)0x0) goto LAB_005b4f7d;
  puVar3 = (uint *)*param_1;
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)FUN_004a2180(uVar8);
    if (puVar3 != (uint *)0x0) {
      bVar1 = true;
      *param_1 = puVar3;
      goto joined_r0x005b517a;
    }
    FUN_0051f420();
    uVar5 = 0x96;
  }
  else {
    FUN_0041ad60(*(undefined8 *)(puVar3 + 2),"../crypto/asn1/a_mbstr.c",0x8e);
    bVar1 = false;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = uVar8;
joined_r0x005b517a:
    if (iVar2 == param_4) {
      iVar2 = FUN_004a1fa0(puVar3,param_2,param_3);
      if (iVar2 != 0) goto LAB_005b4f7d;
      FUN_0051f420();
      uVar5 = 0x9e;
    }
    else {
      if (iVar2 == 0x1002) {
        local_4c = uVar4 * 2;
        pcVar6 = FUN_005b4ad0;
      }
      else if (iVar2 < 0x1003) {
        if (iVar2 == 0x1000) {
          pcVar6 = FUN_005b4b10;
          local_4c = 0;
          FUN_005b4c90(param_2,param_3,param_4,FUN_005b4b40,&local_4c);
        }
        else {
          if (iVar2 != 0x1001) goto LAB_005b51d0;
          pcVar6 = FUN_005b4ab0;
          local_4c = uVar4;
        }
      }
      else if (iVar2 == 0x1004) {
        local_4c = uVar4 << 2;
        pcVar6 = FUN_005b4af0;
      }
      else {
LAB_005b51d0:
        pcVar6 = (code *)0x0;
      }
      local_48 = FUN_0041ad90((long)(int)(local_4c + 1),"../crypto/asn1/a_mbstr.c",0xbb);
      if (local_48 != 0) {
        *(ulong *)(puVar3 + 2) = local_48;
        *puVar3 = local_4c;
        *(undefined1 *)(local_48 + (long)(int)local_4c) = 0;
        FUN_005b4c90(param_2,param_3,param_4,pcVar6,&local_48);
        goto LAB_005b4f7d;
      }
      if (bVar1) {
        FUN_004a2270(puVar3);
      }
      FUN_0051f420();
      uVar5 = 0xbe;
    }
  }
  FUN_0051f540("../crypto/asn1/a_mbstr.c",uVar5,"ASN1_mbstring_ncopy");
  uVar8 = 0xffffffff;
  FUN_0051f8f0(0xd,0xc0100,0);
LAB_005b4f7d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

