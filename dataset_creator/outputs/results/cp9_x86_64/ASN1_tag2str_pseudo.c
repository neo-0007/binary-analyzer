
char * ASN1_tag2str(int tag)

{
  if ((tag & 0xfffffff7U) == 0x102) {
    tag = tag & 0xfffffeff;
  }
  else if (0x1e < (uint)tag) {
    return "(unknown)";
  }
  return *(char **)(tag2str_0 + (long)tag * 8);
}

