
void FUN_00787560(long param_1)

{
  ulong uVar1;
  ulong in_RAX;
  ulong in_R8;
  long in_R9;
  
  if ((*(long *)(param_1 + 0x458) != -1) &&
     (uVar1 = *(ulong *)(param_1 + 0x448), uVar1 <= DAT_00945858)) {
    in_RAX = DAT_00945868 - DAT_00945860;
    if (0x9bf < in_RAX) {
      in_R9 = *(long *)(param_1 + 0x450);
      in_RAX = in_RAX - 0x9c0;
      in_R8 = *(long *)(param_1 + 0x440) + in_R9;
      if (in_R8 <= in_RAX) {
        DAT_00945860 = ((DAT_00945860 + in_RAX) - in_R9) - ((in_RAX - in_R8) / uVar1) * uVar1;
        *(long *)(param_1 + 0x458) = DAT_00945860;
        if ((*(byte *)(*(long *)(param_1 + 0x28) + 0x31c) & 4) == 0) {
          *(byte *)(param_1 + 0x31d) = *(byte *)(param_1 + 0x31d) | 0x40;
          return;
        }
        FUN_0078a7c0(param_1,uVar1,(in_RAX - in_R8) % uVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0078db10(0,*(undefined8 *)(param_1 + 8),0,"cannot allocate memory in static TLS block",in_R8,
               in_R9,in_RAX);
}

