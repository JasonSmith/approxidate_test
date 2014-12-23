namespace Approxidate
{
  [CCode (cheader_filename = "approxidate.h", cname = "approxidate")]
  public static int parse(string date, out Posix.timeval tv);
}
