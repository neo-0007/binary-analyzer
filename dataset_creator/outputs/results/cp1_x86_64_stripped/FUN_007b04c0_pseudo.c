
void FUN_007b04c0(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  bool bVar8;
  
  if (DAT_0094b400 == (undefined1 (*) [16])0x0) {
    return;
  }
  LOCK();
  bVar8 = DAT_0094b3f8 == 0;
  if (bVar8) {
    DAT_0094b3f8 = 1;
  }
  UNLOCK();
  if (!bVar8) {
    FUN_00709590(&DAT_0094b3f8);
  }
  pauVar6 = DAT_0094b400;
  if (DAT_0094b400 == (undefined1 (*) [16])0x0) {
    pauVar6 = (undefined1 (*) [16])FUN_00711600(1,0x58);
    if (pauVar6 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    DAT_0094b400 = pauVar6;
    *(undefined8 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x230) ^ 0x26a8fa5e48af8061;
    if (uVar7 < *(ulong *)*DAT_0094b400) {
      puVar1 = (ulong *)(*(long *)DAT_0094b400[1] + uVar7 * 8);
      plVar2 = (long *)*puVar1;
      if (((ulong)plVar2 & 1) == 0) {
        if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_007af000();
        }
        lVar5 = *plVar2 + -1;
        if (lVar5 == 0) {
          FUN_007104f0();
        }
        else {
          *plVar2 = lVar5;
        }
        *puVar1 = *(ulong *)(pauVar6[1] + 8);
        *(ulong *)(pauVar6[1] + 8) = uVar7 * 2 + 1;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x230) = 0;
  iVar4 = DAT_0094b3f8;
  LOCK();
  DAT_0094b3f8 = 0;
  UNLOCK();
  if (1 < iVar4) {
    FUN_00709660(&DAT_0094b3f8);
    return;
  }
  return;
}

