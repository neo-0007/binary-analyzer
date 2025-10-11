
undefined8 * FUN_004a0770(undefined8 *param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined4 local_58;
  int local_54;
  long local_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_2 == (long *)0x0) || (0x7ffffffe < param_3 - 1U)) || (lVar4 = *param_2, lVar4 == 0))
     || (*(char *)(lVar4 + -1 + param_3) < '\0')) {
    FUN_0051f420();
    uVar5 = 0x103;
LAB_004a0851:
    puVar2 = (undefined8 *)0x0;
    FUN_0051f540("../crypto/asn1/a_object.c",uVar5,"ossl_c2i_ASN1_OBJECT");
    FUN_0051f8f0(0xd,0xd8,0);
    goto LAB_004a0815;
  }
  iVar6 = (int)param_3;
  local_58 = 0;
  local_48 = 0;
  local_54 = iVar6;
  local_50 = lVar4;
  iVar1 = FUN_00423da0(local_68);
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_004239c0();
    if (param_1 != (undefined8 *)0x0) {
      FUN_004a06b0(*param_1);
      *param_1 = puVar2;
    }
    *param_2 = *param_2 + param_3;
    goto LAB_004a0815;
  }
  lVar3 = 0;
  do {
    if ((*(char *)(lVar4 + lVar3) == -0x80) &&
       ((lVar3 == 0 || (-1 < *(char *)(lVar4 + -1 + lVar3))))) {
      FUN_0051f420(0);
      uVar5 = 0x121;
      goto LAB_004a0851;
    }
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 < iVar6);
  if ((((param_1 == (undefined8 *)0x0) ||
       (puVar2 = (undefined8 *)*param_1, puVar2 == (undefined8 *)0x0)) ||
      ((*(byte *)(puVar2 + 4) & 1) == 0)) &&
     (puVar2 = (undefined8 *)FUN_004a0640(), puVar2 == (undefined8 *)0x0)) {
LAB_004a0a15:
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = puVar2[3];
    lVar3 = *param_2;
    lVar7 = (long)iVar6;
    puVar2[3] = 0;
    if ((lVar4 == 0) || (*(int *)((long)puVar2 + 0x14) < iVar6)) {
      *(undefined4 *)((long)puVar2 + 0x14) = 0;
      FUN_0041ad60(lVar4,"../crypto/asn1/a_object.c",0x135);
      lVar4 = FUN_0041ad90(lVar7,"../crypto/asn1/a_object.c",0x136);
      if (lVar4 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/a_object.c",0x151,"ossl_c2i_ASN1_OBJECT");
        FUN_0051f8f0(0xd,0xc0100,0);
        if ((param_1 == (undefined8 *)0x0) || ((undefined8 *)*param_1 != puVar2)) {
          FUN_004a06b0(puVar2);
        }
        goto LAB_004a0a15;
      }
      *(uint *)(puVar2 + 4) = *(uint *)(puVar2 + 4) | 8;
    }
    uVar5 = thunk_FUN_00713a50(lVar4,lVar3,lVar7);
    if ((*(byte *)(puVar2 + 4) & 4) != 0) {
      FUN_0041ad60(*puVar2,"../crypto/asn1/a_object.c",0x140);
      FUN_0041ad60(puVar2[1],"../crypto/asn1/a_object.c",0x141);
      *(uint *)(puVar2 + 4) = *(uint *)(puVar2 + 4) & 0xfffffffb;
    }
    puVar2[3] = uVar5;
    *(int *)((long)puVar2 + 0x14) = iVar6;
    *puVar2 = 0;
    puVar2[1] = 0;
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = puVar2;
    }
    *param_2 = lVar3 + lVar7;
  }
LAB_004a0815:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return puVar2;
}

