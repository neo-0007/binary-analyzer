
void FUN_007b7180(long *param_1,long *param_2,char param_3)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  char local_58 [4];
  undefined4 local_54;
  long *local_50;
  long lStack_48;
  
  if (param_3 == '\0') {
    lStack_48 = ((ulong)*(uint *)(param_2 + 1) + 1) * 0x10;
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    lStack_48 = 0x10;
    *param_2 = 0;
  }
  lStack_48 = lStack_48 + (long)param_2;
  local_54 = 0;
  plVar5 = param_1;
  local_58[0] = param_3;
  local_50 = param_2;
  if (param_1[0x25] == 0) {
    do {
      lVar4 = plVar5[0x66];
      if (lVar4 != -1) {
        if (lVar4 == 0) {
          if (plVar5[0x17] == 0) {
            plVar5[0x66] = -1;
          }
          else {
            lVar4 = 0;
            if ((*(byte *)((long)plVar5 + 0x31e) & 0x20) != 0) {
              lVar4 = *plVar5;
            }
            cVar3 = FUN_007b60e0(plVar5 + 0x66,
                                 *(long *)(plVar5[0xd] + 8) + *(long *)(plVar5[0x17] + 8) + lVar4,
                                 plVar5,"RPATH");
            if (cVar3 != '\0') {
              lVar4 = plVar5[0x66];
              goto LAB_007b72f0;
            }
          }
        }
        else {
LAB_007b72f0:
          FUN_007b3c70(local_58,lVar4);
        }
      }
      puVar2 = PTR_DAT_0093eb60;
      plVar1 = plVar5 + 0x5c;
      plVar5 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
    if ((((param_1[6] == 0) && (PTR_DAT_0093eb60 != (undefined *)0x0)) &&
        ((PTR_DAT_0093eb60[0x31c] & 3) != 2)) &&
       ((param_1 != (long *)PTR_DAT_0093eb60 &&
        (lVar4 = *(long *)(PTR_DAT_0093eb60 + 0x330), lVar4 != -1)))) {
      if (lVar4 == 0) {
        if (*(long *)(PTR_DAT_0093eb60 + 0xb8) == 0) {
          *(undefined8 *)(PTR_DAT_0093eb60 + 0x330) = 0xffffffffffffffff;
        }
        else {
          lVar4 = 0;
          if ((PTR_DAT_0093eb60[0x31e] & 0x20) != 0) {
            lVar4 = *(long *)PTR_DAT_0093eb60;
          }
          cVar3 = FUN_007b60e0(PTR_DAT_0093eb60 + 0x330,
                               *(long *)(*(long *)(PTR_DAT_0093eb60 + 0x68) + 8) +
                               *(long *)(*(long *)(PTR_DAT_0093eb60 + 0xb8) + 8) + lVar4,
                               PTR_DAT_0093eb60,"RPATH");
          if (cVar3 != '\0') {
            lVar4 = *(long *)(puVar2 + 0x330);
            goto LAB_007b73b4;
          }
        }
      }
      else {
LAB_007b73b4:
        FUN_007b3c70(local_58,lVar4);
      }
    }
  }
  FUN_007b3c70(local_58,DAT_0093aec0);
  lVar4 = param_1[0x78];
  if (lVar4 == -1) goto LAB_007b720a;
  if (lVar4 == 0) {
    if (param_1[0x25] == 0) {
      param_1[0x78] = -1;
      goto LAB_007b720a;
    }
    lVar4 = 0;
    if ((*(byte *)((long)param_1 + 0x31e) & 0x20) != 0) {
      lVar4 = *param_1;
    }
    cVar3 = FUN_007b60e0(param_1 + 0x78,
                         *(long *)(param_1[0xd] + 8) + *(long *)(param_1[0x25] + 8) + lVar4,param_1,
                         "RUNPATH");
    if (cVar3 == '\0') goto LAB_007b720a;
    lVar4 = param_1[0x78];
  }
  FUN_007b3c70(local_58,lVar4);
LAB_007b720a:
  if ((*(byte *)((long)param_1 + 0x3ed) & 8) == 0) {
    FUN_007b3c70(local_58,DAT_0093aeb0);
  }
  if (param_3 != '\0') {
    *param_2 = *param_2 + ((ulong)*(uint *)(param_2 + 1) + 1) * 0x10;
  }
  return;
}

