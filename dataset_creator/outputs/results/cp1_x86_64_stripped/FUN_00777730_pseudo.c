
byte * FUN_00777730(undefined8 param_1,undefined4 param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (ulong)*param_3;
  if (*param_3 == 0) goto LAB_0077785f;
LAB_00777770:
  pbVar9 = param_3;
  do {
    cVar3 = (char)uVar6;
    if (((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar3 * 2) & 0x20) != 0) ||
       (cVar3 == '#' || cVar3 == ',')) break;
    pbVar1 = pbVar9 + 1;
    uVar6 = (ulong)*pbVar1;
    pbVar9 = pbVar9 + 1;
  } while (*pbVar1 != 0);
  lVar8 = (long)pbVar9 - (long)param_3;
  do {
    if (3 < DAT_0094ac18) {
      uVar5 = FUN_006e27f0(&DAT_0083ed80,"%s: line %d: cannot specify more than %d trim domains",5);
      iVar4 = FUN_006f4ae0(&local_38,uVar5,param_1,param_2,4);
joined_r0x007778a7:
      if (-1 < iVar4) {
        FUN_006fcea0(0,&DAT_007e3d61,local_38);
        FUN_007104f0(local_38);
      }
      param_3 = (byte *)0x0;
LAB_007778ac:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return param_3;
    }
    lVar7 = (long)DAT_0094ac18;
    DAT_0094ac18 = DAT_0094ac18 + 1;
    uVar5 = FUN_007128e0(param_3,lVar8);
    (&DAT_0094ac20)[lVar7] = uVar5;
    uVar6 = (ulong)(char)*pbVar9;
    lVar8 = *(long *)(in_FS_OFFSET + -0x40);
    bVar2 = *(byte *)(lVar8 + 1 + uVar6 * 2);
    param_3 = pbVar9;
    while ((bVar2 & 0x20) != 0) {
      uVar6 = (ulong)(char)param_3[1];
      param_3 = param_3 + 1;
      bVar2 = *(byte *)(lVar8 + 1 + uVar6 * 2);
    }
    cVar3 = (char)uVar6;
    if ((cVar3 == ',') || ((byte)(cVar3 - 0x3aU) < 2)) {
      uVar6 = (ulong)(char)param_3[1];
      bVar2 = *(byte *)(lVar8 + 1 + uVar6 * 2);
      pbVar9 = param_3;
      while (param_3 = pbVar9 + 1, (bVar2 & 0x20) != 0) {
        uVar6 = (ulong)(char)pbVar9[2];
        pbVar9 = param_3;
        bVar2 = *(byte *)(lVar8 + 1 + uVar6 * 2);
      }
      if (((char)uVar6 == '\0') || ((char)uVar6 == '#')) {
        uVar5 = FUN_006e27f0(&DAT_0083ed80,"%s: line %d: list delimiter not followed by domain",5);
        iVar4 = FUN_006f4ae0(&local_38,uVar5,param_1,param_2);
        goto joined_r0x007778a7;
      }
    }
    else if ((cVar3 == '\0') || (cVar3 == '#')) goto LAB_007778ac;
    if ((char)uVar6 != '\0') goto LAB_00777770;
LAB_0077785f:
    lVar8 = 0;
    pbVar9 = param_3;
  } while( true );
}

