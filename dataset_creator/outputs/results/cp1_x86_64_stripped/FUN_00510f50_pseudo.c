
long FUN_00510f50(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5,
                 undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  bool bVar11;
  long in_FS_OFFSET;
  byte bVar12;
  int local_44;
  long local_40;
  
  bVar12 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 2) {
LAB_00511056:
    bVar11 = param_4 == 0x40a;
    if (param_4 == 0x43f || bVar11) {
      cVar6 = (param_4 != 0x40a) * '\x02';
    }
    else {
      bVar11 = false;
      cVar6 = (param_4 != 0x40b) * '\x02' + '\x01';
    }
    goto LAB_00511085;
  }
  if (param_1 == (undefined8 *)0x0) {
LAB_00510fd9:
    bVar11 = param_2 == (undefined8 *)0x0 || param_4 == 0;
    if (bVar11) {
LAB_00511016:
      FUN_0051f420();
      uVar7 = 0xb6;
      goto LAB_00511027;
    }
    if ((param_4 == 0x40a) || (param_4 == 0x43f)) {
      if (param_3 == 0x20) goto LAB_00511056;
      goto LAB_00511016;
    }
    if (param_4 == 0x40b) {
      cVar6 = '\x01';
      if (param_3 != 0x38) goto LAB_00511016;
    }
    else {
      cVar6 = '\x03';
      if (param_3 != 0x39) goto LAB_00511016;
    }
LAB_00511085:
    lVar2 = FUN_00511460(param_6,cVar6,1,param_7);
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ecx_backend.c",0xbd,"ossl_ecx_key_op");
      FUN_0051f8f0(0x10,0xc0100,0);
      goto LAB_005110b5;
    }
    if (param_5 == 0) {
      thunk_FUN_00713a50(lVar2 + 0x11,param_2,(long)param_3);
      goto LAB_005110b5;
    }
    pbVar3 = (byte *)FUN_00511650(lVar2);
    if (pbVar3 == (byte *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ecx_backend.c",199,"ossl_ecx_key_op");
      FUN_0051f8f0(0x10,0xc0100,0);
    }
    else {
      if (param_5 == 2) {
        if (param_4 != 0) {
          if ((param_4 == 0x40a) || (param_4 == 0x43f)) {
            uVar7 = 0x20;
LAB_00511241:
            iVar1 = FUN_00429760(param_6,pbVar3,uVar7,0);
            if (iVar1 < 1) goto LAB_00511191;
            if (bVar11) {
              *pbVar3 = *pbVar3 & 0xf8;
              pbVar3[0x1f] = pbVar3[0x1f] & 0x7f | 0x40;
            }
            else if (param_4 == 0x40b) goto LAB_0051126d;
          }
          else {
            uVar7 = 0x39;
            if (param_4 != 0x40b) goto LAB_00511241;
            iVar1 = FUN_00429760(param_6,pbVar3,0x38,0);
            if (iVar1 < 1) goto LAB_00511191;
LAB_0051126d:
            *pbVar3 = *pbVar3 & 0xfc;
            pbVar3[0x37] = pbVar3[0x37] | 0x80;
          }
        }
      }
      else {
        if ((param_4 == 0x40a) || (param_4 == 0x43f)) {
          lVar4 = 0x20;
        }
        else {
          lVar4 = (ulong)(param_4 != 0x40b) + 0x38;
        }
        *(undefined8 *)pbVar3 = *param_2;
        *(undefined8 *)(pbVar3 + lVar4 + -8) = *(undefined8 *)((long)param_2 + lVar4 + -8);
        lVar10 = (long)pbVar3 - (long)((ulong)(pbVar3 + 8) & 0xfffffffffffffff8);
        puVar8 = (undefined8 *)((long)param_2 - lVar10);
        puVar9 = (undefined8 *)((ulong)(pbVar3 + 8) & 0xfffffffffffffff8);
        for (uVar5 = (ulong)((uint)((int)lVar4 + (int)lVar10) >> 3); uVar5 != 0; uVar5 = uVar5 - 1)
        {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + (ulong)bVar12 * -2 + 1;
          puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
        }
      }
      iVar1 = FUN_00510b60(lVar2);
      if (iVar1 != 0) goto LAB_005110b5;
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ecx_backend.c",0xdb,"ossl_ecx_key_op");
      FUN_0051f8f0(0x10,0xa6,0);
    }
LAB_00511191:
    FUN_00511590(lVar2);
  }
  else {
    FUN_004a8930(0,&local_44,0,param_1);
    if (local_44 == -1) {
      if (param_4 == 0) {
        param_4 = FUN_00423da0(*param_1);
      }
      else {
        iVar1 = FUN_00423da0(*param_1);
        if (iVar1 != param_4) {
          FUN_0051f420();
          uVar7 = 0xb0;
          goto LAB_00511027;
        }
      }
      goto LAB_00510fd9;
    }
    FUN_0051f420();
    uVar7 = 0xaa;
LAB_00511027:
    FUN_0051f540("../crypto/ec/ecx_backend.c",uVar7,"ossl_ecx_key_op");
    FUN_0051f8f0(0x10,0x66,0);
  }
  lVar2 = 0;
LAB_005110b5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar2;
}

