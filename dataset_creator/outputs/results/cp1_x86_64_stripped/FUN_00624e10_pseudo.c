
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_00624e10(char param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined1 local_41;
  long local_40;
  
  cVar1 = DAT_0093d5a0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != '\x01') && (DAT_0093d5a0 != '\0')) {
    FUN_00624550(&local_41);
    DAT_0093d5a0 = '\0';
    _DAT_009430c0 = &PTR_FUN_009388a8;
    FUN_00625980(&DAT_009430f8);
    _DAT_00943060 = &PTR_FUN_009388a8;
    FUN_00625980(&DAT_00943098);
    _DAT_00943000 = &PTR_FUN_009388a8;
    FUN_00625980(&DAT_00943038);
    _DAT_00942ca0 = &PTR_FUN_00938928;
    FUN_00625980(&DAT_00942cd8);
    _DAT_00942c40 = &PTR_FUN_00938928;
    FUN_00625980(&DAT_00942c78);
    _DAT_00942be0 = &PTR_FUN_00938928;
    FUN_00625980(&DAT_00942c18);
                    /* try { // try from 00624f26 to 0062506a has its CatchHandler @ 0062507d */
    FUN_006637a0(&DAT_00942f00,PTR_DAT_0093e070,0x10,0x2000);
    FUN_006637a0(&DAT_00942e00,PTR_DAT_0093e078,8,0x2000);
    FUN_006637a0(&DAT_00942d00,PTR_DAT_0093e068,0x10,0x2000);
    FUN_0066ed50(&DAT_009437e8,&DAT_00942f00);
    FUN_0066ed50(&DAT_00943910,&DAT_00942e00);
    FUN_0066ed50(&DAT_009436c8,&DAT_00942d00);
    FUN_0066ed50(&DAT_009435a8,&DAT_00942d00);
    FUN_00663ba0(&DAT_00942ae0,PTR_DAT_0093e070,0x10,0x2000);
    FUN_00663ba0(&DAT_009429e0,PTR_DAT_0093e078,8,0x2000);
    FUN_00663ba0(&DAT_009428e0,PTR_DAT_0093e068,0x10,0x2000);
    FUN_0066f7f0(&DAT_00943368,&DAT_00942ae0);
    FUN_0066f7f0(&DAT_00943490,&DAT_009429e0);
    FUN_0066f7f0(&DAT_00943248,&DAT_009428e0);
    FUN_0066f7f0(&DAT_00943128,&DAT_009428e0);
    FUN_00624d70(&local_41);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

