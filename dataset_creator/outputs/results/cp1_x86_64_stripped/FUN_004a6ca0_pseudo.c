
ulong FUN_004a6ca0(long *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  bool bVar6;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 == 0) {
    if (*param_2 == '\x05') {
      uVar5 = 0xffffffff;
    }
    else {
      iVar1 = (int)*(ulong *)(param_2 + 8);
      uVar5 = *(ulong *)(param_2 + 8) & 0xffffffff;
      if (iVar1 == 5) goto LAB_004a6e70;
      if (iVar1 < 6) {
        if (iVar1 == -4) goto LAB_004a6e88;
        if (iVar1 == 1) goto LAB_004a6d28;
      }
      else if (iVar1 == 6) goto LAB_004a6e3d;
    }
    iVar1 = (int)uVar5;
    if (param_3 == 0) goto LAB_004a6d70;
LAB_004a6df5:
    pauVar2 = (undefined1 (*) [16])*param_1;
    *pauVar2 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar2[1] = 0x80;
    *(int *)(*pauVar2 + 4) = iVar1;
    if (*param_2 != '\x05') {
      bVar6 = *param_1 != 0;
      goto LAB_004a6e1c;
    }
    uVar5 = 0xc0;
    bVar6 = *param_1 != 0;
  }
  else {
    if (param_3 != 0) {
      if (*(code **)(lVar3 + 0x20) != (code *)0x0) {
        (**(code **)(lVar3 + 0x20))();
        return 1;
      }
      if (*param_2 == '\x05') {
        iVar1 = -1;
      }
      else {
        iVar1 = (int)*(undefined8 *)(param_2 + 8);
        if (iVar1 == 5) {
LAB_004a6e70:
          *param_1 = 1;
          return 1;
        }
        if (iVar1 < 6) {
          if (iVar1 == -4) {
LAB_004a6e88:
            puVar4 = (undefined4 *)FUN_0041ad90(0x10,"../crypto/asn1/tasn_new.c",0x12d);
            if (puVar4 == (undefined4 *)0x0) {
              FUN_0051f420();
              FUN_0051f540("../crypto/asn1/tasn_new.c",0x12e,"asn1_primitive_new");
              FUN_0051f8f0(0xd,0xc0100,0);
              return 0;
            }
            *(undefined8 *)(puVar4 + 2) = 0;
            *puVar4 = 0xffffffff;
            *param_1 = (long)puVar4;
            bVar6 = true;
            goto LAB_004a6e1c;
          }
          if (iVar1 == 1) {
LAB_004a6d28:
            *(int *)param_1 = (int)*(undefined8 *)(param_2 + 0x28);
            return 1;
          }
        }
        else if (iVar1 == 6) {
LAB_004a6e3d:
          lVar3 = FUN_004239c0(0);
          *param_1 = lVar3;
          return 1;
        }
      }
      goto LAB_004a6df5;
    }
    if (*(code **)(lVar3 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004a6cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(lVar3 + 0x10))();
      return uVar5;
    }
    if (*param_2 == '\x05') {
      uVar5 = 0xffffffff;
    }
    else {
      iVar1 = (int)*(ulong *)(param_2 + 8);
      uVar5 = *(ulong *)(param_2 + 8) & 0xffffffff;
      if (iVar1 == 5) goto LAB_004a6e70;
      if (iVar1 < 6) {
        if (iVar1 == -4) goto LAB_004a6e88;
        if (iVar1 == 1) goto LAB_004a6d28;
      }
      else if (iVar1 == 6) goto LAB_004a6e3d;
    }
LAB_004a6d70:
    pauVar2 = (undefined1 (*) [16])FUN_004a2180(uVar5);
    bVar6 = pauVar2 != (undefined1 (*) [16])0x0;
    *param_1 = (long)pauVar2;
    if (*param_2 != '\x05' || !bVar6) goto LAB_004a6e1c;
    uVar5 = *(ulong *)pauVar2[1] | 0x40;
    bVar6 = *param_2 == '\x05' && bVar6;
  }
  *(ulong *)pauVar2[1] = uVar5;
LAB_004a6e1c:
  return (ulong)bVar6;
}

