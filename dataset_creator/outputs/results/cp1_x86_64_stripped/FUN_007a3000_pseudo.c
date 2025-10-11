
void FUN_007a3000(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_d8 [200];
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  FUN_00795560(auStack_d8,200,"Fatal glibc error: invalid allocation buffer of size %zu\n",param_2);
                    /* WARNING: Subroutine does not return */
  FUN_00703110(auStack_d8);
}

