
/* WARNING: Removing unreachable block (ram,0x0070e115) */
/* WARNING: Removing unreachable block (ram,0x0070e13e) */

undefined8 * FUN_0070e070(ulong param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  uVar5 = param_1 + 7 + param_2 & -param_2;
  if ((param_1 < uVar5) &&
     (puVar3 = (undefined8 *)FUN_0076f020(0,uVar5,3,param_3 | 0x22,0xffffffff,0),
     puVar3 != (undefined8 *)0xffffffffffffffff)) {
    if (((param_3 & 0x40000) == 0) && (DAT_0093e0e8 - 1U < uVar5)) {
      uVar4 = DAT_0093eb18 - 1U & (ulong)puVar3;
      uVar6 = uVar5;
      puVar7 = puVar3;
      if (uVar4 != 0) {
        uVar6 = uVar5 + uVar4;
        puVar7 = (undefined8 *)(-DAT_0093eb18 & (ulong)puVar3);
      }
      FUN_0076f0e0(puVar7,uVar6,0xe);
    }
    puVar7 = puVar3 + 2;
    if (((ulong)puVar3 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0070bf60("((INTERNAL_SIZE_T) chunk2mem (mm) & MALLOC_ALIGN_MASK) == 0","malloc.c",0x9a2,
                   "sysmalloc_mmap");
    }
    *puVar3 = 0;
    puVar3[1] = uVar5 | 2;
    lVar2 = DAT_0093e110;
    iVar1 = DAT_0093e0fc;
    LOCK();
    DAT_0093e0fc = DAT_0093e0fc + 1;
    UNLOCK();
    if (DAT_0093e104 < iVar1 + 1) {
      LOCK();
      UNLOCK();
      DAT_0093e104 = iVar1 + 1;
    }
    LOCK();
    DAT_0093e110 = DAT_0093e110 + uVar5;
    UNLOCK();
    if (DAT_0093e118 < uVar5 + lVar2) {
      LOCK();
      DAT_0093e118 = uVar5 + lVar2;
      UNLOCK();
      return puVar7;
    }
  }
  else {
    puVar7 = (undefined8 *)0xffffffffffffffff;
  }
  return puVar7;
}

