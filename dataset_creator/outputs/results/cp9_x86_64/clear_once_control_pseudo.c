
/* WARNING: Removing unreachable block (ram,0x00701440) */
/* WARNING: Removing unreachable block (ram,0x00701448) */

void clear_once_control(undefined4 *param_1)

{
  *param_1 = 0;
  syscall();
  return;
}

