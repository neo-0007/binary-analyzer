
undefined4 * FUN_004e85e0(long param_1,undefined4 *param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  puVar6 = param_2;
  if ((param_2 == (undefined4 *)0x0) &&
     (puVar6 = (undefined4 *)FUN_004e84c0(), puVar6 == (undefined4 *)0x0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_asn1.c",0x18c,"EC_GROUP_get_ecparameters");
    FUN_0051f8f0(0x10,0xc0100,0);
    puVar5 = puVar6;
  }
  else {
    *puVar6 = 1;
    plVar1 = *(long **)(puVar6 + 2);
    if ((param_1 == 0) || (plVar1 == (long *)0x0)) {
LAB_004e8717:
      FUN_0051f420();
      uVar12 = 0x197;
LAB_004e8728:
      FUN_0051f540("../crypto/ec/ec_asn1.c",uVar12,"EC_GROUP_get_ecparameters");
      FUN_0051f8f0(0x10,0x80010,0);
    }
    else {
      FUN_004a06b0(*plVar1);
      FUN_004a7f30(plVar1[1]);
      iVar2 = FUN_004ef890(param_1);
      lVar4 = FUN_004239c0(iVar2);
      *plVar1 = lVar4;
      if (lVar4 == 0) {
        FUN_0051f420();
        uVar12 = 0xca;
LAB_004e8d71:
        FUN_0051f540("../crypto/ec/ec_asn1.c",uVar12,"ec_asn1_group2fieldid");
        uVar12 = 0x80008;
LAB_004e87f7:
        FUN_0051f8f0(0x10,uVar12,0);
LAB_004e8803:
        FUN_004b7fa0(0);
        goto LAB_004e8717;
      }
      if (iVar2 != 0x196) {
        if (iVar2 != 0x197) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_asn1.c",0x12a,"ec_asn1_group2fieldid");
          uVar12 = 0x83;
          goto LAB_004e87f7;
        }
        puVar5 = (undefined4 *)FUN_004e84a0();
        plVar1[1] = (long)puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          FUN_0051f420();
          uVar12 = 0xed;
          goto LAB_004e8e51;
        }
        uVar3 = FUN_004efad0(param_1);
        *puVar5 = uVar3;
        iVar2 = FUN_004f1ad0(param_1);
        if (iVar2 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_asn1.c",0xf6,"ec_asn1_group2fieldid");
          uVar12 = 0x80010;
          goto LAB_004e87f7;
        }
        lVar4 = FUN_004239c0(iVar2);
        *(long *)(puVar5 + 2) = lVar4;
        if (lVar4 == 0) {
          FUN_0051f420();
          uVar12 = 0xfb;
          goto LAB_004e8d71;
        }
        if (iVar2 == 0x2aa) {
          iVar2 = FUN_004f1b30(param_1,&local_4c);
          if (iVar2 != 0) {
            lVar4 = FUN_004a7700();
            *(long *)(puVar5 + 4) = lVar4;
            if (lVar4 == 0) {
              FUN_0051f420(0);
              uVar12 = 0x107;
              goto LAB_004e9049;
            }
            iVar2 = thunk_FUN_0049f880(lVar4,local_4c);
            if (iVar2 != 0) goto LAB_004e86fa;
            FUN_0051f420();
            FUN_0051f540("../crypto/ec/ec_asn1.c",0x10b,"ec_asn1_group2fieldid");
            FUN_0051f8f0(0x10,0x8000d,0);
          }
        }
        else {
          if (iVar2 != 0x2ab) {
            lVar4 = FUN_004a7e50();
            *(long *)(puVar5 + 4) = lVar4;
            if (lVar4 != 0) {
LAB_004e86fa:
              FUN_004b7fa0(0);
              goto LAB_004e885a;
            }
            FUN_0051f420();
            uVar12 = 0x123;
            goto LAB_004e8e51;
          }
          iVar2 = FUN_004f1bd0(param_1,&local_54,&local_50,&local_4c);
          if (iVar2 != 0) {
            puVar8 = (undefined4 *)FUN_004e8480();
            *(undefined4 **)(puVar5 + 4) = puVar8;
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = local_54;
              puVar8[1] = local_50;
              puVar8[2] = local_4c;
              FUN_004b7fa0(0);
              goto LAB_004e885a;
            }
            FUN_0051f420();
            uVar12 = 0x116;
LAB_004e9049:
            FUN_0051f540("../crypto/ec/ec_asn1.c",uVar12,"ec_asn1_group2fieldid");
            FUN_0051f8f0(0x10,0xc0100,0);
          }
        }
        goto LAB_004e8803;
      }
      lVar4 = FUN_004b7690();
      if (lVar4 == 0) {
        FUN_0051f420();
        uVar12 = 0xd0;
LAB_004e8e51:
        FUN_0051f540("../crypto/ec/ec_asn1.c",uVar12,"ec_asn1_group2fieldid");
        uVar12 = 0xc0100;
        goto LAB_004e87f7;
      }
      iVar2 = FUN_004efa30(param_1,lVar4,0,0,0);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_asn1.c",0xd5,"ec_asn1_group2fieldid");
        uVar12 = 0x80010;
LAB_004e8b47:
        FUN_0051f8f0(0x10,uVar12,0);
        FUN_004b7fa0(lVar4);
        goto LAB_004e8717;
      }
      lVar7 = FUN_0049fa60(lVar4,0);
      plVar1[1] = lVar7;
      if (lVar7 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_asn1.c",0xdb,"ec_asn1_group2fieldid");
        uVar12 = 0x8000d;
        goto LAB_004e8b47;
      }
      FUN_004b7fa0(lVar4);
LAB_004e885a:
      plVar1 = *(long **)(puVar6 + 4);
      if (((plVar1 == (long *)0x0) || (*plVar1 == 0)) || (plVar1[1] == 0)) {
LAB_004e8bc7:
        FUN_0051f420();
        uVar12 = 0x19d;
        goto LAB_004e8728;
      }
      lVar4 = FUN_004b7690();
      if ((lVar4 == 0) || (local_78 = FUN_004b7690(), local_78 == 0)) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_asn1.c",0x140,"ec_asn1_group2curve");
        FUN_0051f8f0(0x10,0xc0100,0);
        local_78 = 0;
        lVar7 = 0;
        local_70 = 0;
LAB_004e8c27:
        FUN_0041ad60(lVar7,"../crypto/ec/ec_asn1.c",0x178);
        FUN_0041ad60(local_70,"../crypto/ec/ec_asn1.c",0x179);
        FUN_004b7fa0(lVar4);
        FUN_004b7fa0(local_78);
        goto LAB_004e8bc7;
      }
      iVar2 = FUN_004efa30(param_1,0,lVar4,local_78,0);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_asn1.c",0x146,"ec_asn1_group2curve");
        FUN_0051f8f0(0x10,0x80010,0);
        lVar7 = 0;
        local_70 = 0;
        goto LAB_004e8c27;
      }
      iVar2 = FUN_004efad0(param_1);
      uVar10 = (long)iVar2 + 7U >> 3;
      lVar7 = FUN_0041ad90(uVar10,"../crypto/ec/ec_asn1.c",0x150);
      if ((lVar7 == 0) ||
         (local_70 = FUN_0041ad90(uVar10,"../crypto/ec/ec_asn1.c",0x151), local_70 == 0)) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_asn1.c",0x152,"ec_asn1_group2curve");
        FUN_0051f8f0(0x10,0xc0100,0);
        local_70 = 0;
        goto LAB_004e8c27;
      }
      iVar2 = FUN_004b87b0(lVar4,lVar7,uVar10 & 0xffffffff);
      if ((iVar2 < 0) || (iVar2 = FUN_004b87b0(local_78,local_70), iVar2 < 0)) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_asn1.c",0x157,"ec_asn1_group2curve");
        FUN_0051f8f0(0x10,0x80003,0);
        goto LAB_004e8c27;
      }
      iVar2 = thunk_FUN_004a1fa0(*plVar1,lVar7,uVar10 & 0xffffffff);
      if ((iVar2 == 0) ||
         (iVar2 = thunk_FUN_004a1fa0(plVar1[1],local_70,uVar10 & 0xffffffff), iVar2 == 0)) {
        FUN_0051f420();
        uVar12 = 0x15e;
LAB_004e8f66:
        FUN_0051f540("../crypto/ec/ec_asn1.c",uVar12,"ec_asn1_group2curve");
        FUN_0051f8f0(0x10,0x8000d,0);
        goto LAB_004e8c27;
      }
      lVar11 = *(long *)(param_1 + 0x30);
      lVar9 = plVar1[2];
      if (lVar11 == 0) {
        thunk_FUN_004a2270();
        plVar1[2] = 0;
      }
      else {
        if (lVar9 == 0) {
          lVar9 = FUN_004a7820();
          plVar1[2] = lVar9;
          if (lVar9 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/ec/ec_asn1.c",0x166,"ec_asn1_group2curve");
            FUN_0051f8f0(0x10,0xc0100,0);
            goto LAB_004e8c27;
          }
          lVar11 = *(long *)(param_1 + 0x30);
        }
        uVar3 = *(undefined4 *)(param_1 + 0x38);
        *(ulong *)(lVar9 + 0x10) = *(ulong *)(lVar9 + 0x10) & 0xfffffffffffffff0 | 8;
        iVar2 = thunk_FUN_004a1fa0(lVar9,lVar11,uVar3);
        if (iVar2 == 0) {
          FUN_0051f420();
          uVar12 = 0x16d;
          goto LAB_004e8f66;
        }
      }
      FUN_0041ad60(lVar7,"../crypto/ec/ec_asn1.c",0x178);
      FUN_0041ad60(local_70,"../crypto/ec/ec_asn1.c",0x179);
      FUN_004b7fa0(lVar4);
      FUN_004b7fa0(local_78);
      lVar4 = FUN_004ef780(param_1);
      if (lVar4 != 0) {
        uVar3 = FUN_004ef8d0(param_1);
        uVar10 = FUN_004f4df0(param_1,lVar4,uVar3,&local_48,0);
        if (uVar10 == 0) {
          FUN_0051f420();
          uVar12 = 0x1ab;
        }
        else {
          lVar4 = *(long *)(puVar6 + 6);
          if (lVar4 == 0) {
            lVar4 = FUN_004a7670();
            *(long *)(puVar6 + 6) = lVar4;
            if (lVar4 == 0) {
              FUN_0041ad60(local_48,"../crypto/ec/ec_asn1.c",0x1af);
              FUN_0051f420();
              FUN_0051f540("../crypto/ec/ec_asn1.c",0x1b0,"EC_GROUP_get_ecparameters");
              FUN_0051f8f0(0x10,0xc0100,0);
              goto LAB_004e8743;
            }
          }
          FUN_004a2150(lVar4,local_48,uVar10 & 0xffffffff);
          lVar4 = FUN_004ef7e0(param_1);
          if (lVar4 != 0) {
            uVar12 = *(undefined8 *)(puVar6 + 8);
            lVar4 = FUN_0049fa60(lVar4,uVar12);
            *(long *)(puVar6 + 8) = lVar4;
            if (lVar4 == 0) {
              *(undefined8 *)(puVar6 + 8) = uVar12;
              FUN_0051f420();
              uVar12 = 0x1be;
            }
            else {
              lVar4 = FUN_004ef840(param_1);
              if (lVar4 == 0) goto LAB_004e874b;
              uVar12 = *(undefined8 *)(puVar6 + 10);
              lVar4 = FUN_0049fa60(lVar4,uVar12);
              *(long *)(puVar6 + 10) = lVar4;
              if (lVar4 != 0) goto LAB_004e874b;
              *(undefined8 *)(puVar6 + 10) = uVar12;
              FUN_0051f420();
              uVar12 = 0x1c8;
            }
            FUN_0051f540("../crypto/ec/ec_asn1.c",uVar12,"EC_GROUP_get_ecparameters");
            FUN_0051f8f0(0x10,0x8000d,0);
            goto LAB_004e8743;
          }
          FUN_0051f420(0);
          uVar12 = 0x1b8;
        }
        goto LAB_004e8728;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_asn1.c",0x1a3,"EC_GROUP_get_ecparameters");
      FUN_0051f8f0(0x10,0x71,0);
    }
LAB_004e8743:
    puVar5 = puVar6;
    if (param_2 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
      goto LAB_004e874b;
    }
  }
  puVar6 = (undefined4 *)0x0;
  FUN_004e84e0(puVar5);
LAB_004e874b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return puVar6;
}

