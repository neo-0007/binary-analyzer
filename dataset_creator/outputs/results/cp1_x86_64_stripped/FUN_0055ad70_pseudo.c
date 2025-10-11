
undefined8
FUN_0055ad70(long param_1,uint param_2,uint param_3,code *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  int local_46c;
  undefined1 local_468 [5];
  undefined8 local_463;
  undefined2 local_45b;
  undefined1 local_459;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = FUN_00535890();
  if (lVar3 == 0) {
    FUN_0051f420();
    uVar6 = 0;
    FUN_0051f540("../crypto/pem/pvkfmt.c",0x344,"do_PVK_body_key");
    FUN_0051f8f0(9,0xc0100,0);
    FUN_00537b70(0);
    FUN_00537a40(0);
    goto LAB_0055af87;
  }
  if (param_2 == 0) {
    uVar6 = FUN_0055ac00(param_1,param_3,param_6,param_7);
    FUN_00537b70(lVar3);
    FUN_00537a40(0);
    goto LAB_0055af87;
  }
  if (param_4 == (code *)0x0) {
    iVar2 = FUN_005551d0(local_448,0x400,0,param_5);
  }
  else {
    iVar2 = (*param_4)();
  }
  if (iVar2 < 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pem/pvkfmt.c",0x354,"do_PVK_body_key");
    uVar8 = 0x68;
  }
  else {
    puVar4 = (undefined8 *)FUN_0041ad90(param_3 + 8,"../crypto/pem/pvkfmt.c",0x357);
    if (puVar4 != (undefined8 *)0x0) {
      iVar2 = FUN_005593f0(local_468,param_1,(ulong)param_2,local_448,iVar2,param_8);
      if (iVar2 == 0) {
LAB_0055af50:
        lVar5 = 0;
LAB_0055af53:
        uVar6 = 0;
        FUN_00537b70(lVar3);
        FUN_00537a40(lVar5);
      }
      else {
        puVar7 = (undefined8 *)((ulong)param_2 + param_1);
        *puVar4 = *puVar7;
        if (param_3 < 8) {
          FUN_0051f420();
          lVar5 = 0;
          FUN_0051f540("../crypto/pem/pvkfmt.c",0x364,"do_PVK_body_key");
          FUN_0051f8f0(9,0x7d,0);
          goto LAB_0055af53;
        }
        lVar5 = FUN_00537960(param_8,"RC4",param_9);
        if (lVar5 == 0) goto LAB_0055af50;
        iVar2 = FUN_00538ab0(lVar3,lVar5,0,local_468,0);
        if (iVar2 == 0) goto LAB_0055af53;
        puVar7 = puVar7 + 1;
        puVar1 = puVar4 + 1;
        iVar2 = FUN_005360f0(lVar3,puVar1,&local_46c,puVar7,param_3 - 8);
        if (iVar2 == 0) goto LAB_0055af53;
        iVar2 = FUN_00536710(lVar3,(long)local_46c + (long)puVar1,&local_46c);
        if (iVar2 == 0) goto LAB_0055af53;
        if ((*(int *)(puVar4 + 1) != 0x32415352) && (*(int *)(puVar4 + 1) != 0x32535344)) {
          local_45b = 0;
          local_463 = 0;
          local_459 = 0;
          iVar2 = FUN_00538ab0(lVar3,lVar5,0,local_468,0);
          if (iVar2 != 0) {
            iVar2 = FUN_005360f0(lVar3,puVar1,&local_46c,puVar7,param_3 - 8);
            if (iVar2 != 0) {
              iVar2 = FUN_00536710(lVar3,(long)puVar1 + (long)local_46c,&local_46c);
              if (iVar2 != 0) {
                if ((*(int *)(puVar4 + 1) == 0x32415352) || (*(int *)(puVar4 + 1) == 0x32535344))
                goto LAB_0055af22;
                FUN_0051f420();
                FUN_0051f540("../crypto/pem/pvkfmt.c",0x37d,"do_PVK_body_key");
                FUN_0051f8f0(9,0x65,0);
              }
            }
          }
          goto LAB_0055af53;
        }
LAB_0055af22:
        uVar6 = FUN_0055ac00(puVar4,param_3,param_6,param_7);
        FUN_00537b70(lVar3);
        FUN_00537a40(lVar5);
      }
      FUN_004227b0(local_468,0x14);
      FUN_0041ad60(puVar4,"../crypto/pem/pvkfmt.c",0x390);
      goto LAB_0055af87;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/pem/pvkfmt.c",0x359,"do_PVK_body_key");
    uVar8 = 0xc0100;
  }
  uVar6 = 0;
  FUN_0051f8f0(9,uVar8,0);
  FUN_00537b70(lVar3);
  FUN_00537a40(0);
LAB_0055af87:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

