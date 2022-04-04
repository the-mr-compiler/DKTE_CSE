# Experiment No. 1

**Title:** Create Web Pages using HTML5.

**Objective:**
At the end of practical session, student will be able to create web pages using HTML 5 for
online application.

**Keyword:** Web Pages, HTML 5

**Theory:**
Web page is a document accessible from Internet or intranet through specialized software called as browser on different network connected devices like personal computer or mobile. Web pages are generally written in Hypertext Markup Language (HTML). HTML uses its own tags/elements to mark the contents in document. Browser knows how to show these HTML pages with special effect of tag on document content. Tags in document always provide structure to document. At the top level, this structure looks like as follows.

```html
<!DOCTYPE HTML>
<HTML lang=”en”>
<HEAD></HEAD>
<BODY></BODY>
</HTML>
```

```<!DOCTYPE>``` specifies type of the document and the DTD that validates the document. ``` <!DOCTYPE>``` must be first element of HTML page and there must be only one ``` <!DOCTYPE>``` per document. ```<HEAD>``` element is used to add metadata to document, to link the document with Cascaded Style Sheet (CSS) and JavaScript files, and also used to improve performance by providing CSS rules in head. Linking between style sheet and HTML file can be provided using ```<link rel="stylesheet" type="text/css" />```. ```<HEAD>``` can include ```<TITLE>``` tag to provide title to
browser on title bar. ```<BODY>``` holds actual body of document.
Tags in HTML can be broadly divided into four different sections.

**1. Structural Block Elements**
    Structural block elements provide structure to HTML document. The structure
reflects the hierarchy and relationship of a document’s topic. Some of structural block elements
are:

- ```<ol>``` creates an ordered list of one or more list items (```<li>```). Items belong to the same set and are in order. Order implies sequence or ranking.

- ```<ul>``` creates an unordered list of one or more list items (```<li>```). Items belong to the same set
    without sequence or ranking.
- ```<table>``` creates a tabular data structure in rows (```<tr>```) and cells (```<th>``` and ```<td>```). It may
    optionally contain groups of rows one table header (```<thead>```) one table footer (```<tfoot>```)
    one or more table body groups (```<tbody>```). It may optionally contain one or more column
    groups (```<colgroup>```) containing one or more columns (```<col>```). A table may optionally
    contain a ```<caption>```
- ```<div>``` is a multi-purpose block element normally creates document division. Document
    divisions are essential for organizing a document into sections, and sections are the
    essential building blocks of documents.
- ```<article>``` represents a self-contained composition. This could be a forum post, a magazine
    or newspaper article, a blog entry, etc.
- ```<section>``` represents a generic section of a document and acts as a thematic grouping of
    content, typically with a heading. A web site’s home page could be split into sections for
    an introduction, news items, and contact information.
- ```<nav>``` defines a section of a page that links to other pages or to parts within the page — basically a section with navigation links.

**2. Terminal Block Elements**

Terminal block elements used to terminate block structure to insert contents. Structurally, these elements are siblings to other terminal, which implies they all have subtopics related to their parent block’s topic. Some of terminal block elements are:

 - ```<h1>```, ```<h2>```, ```<h3>```, ```<h4>```, ```<h5>```, and ```<h6>``` create headings from most important to least with their relationship for example ```<h2>``` implies that it is a subtopic of the previous ```<h1>```
element. 
- ```<p>``` creates a paragraph.
- ```<address>``` creates a contact record for the document itself.
- ```<caption>``` creates a table caption. Semantically, it labels a table.

**3. Multi-purpose Block Elements**

Multi-purpose block elements extend the functionality of structural elements to create nesting structure within structure or terminating current structure. When a multi-purpose block is used structurally, it has structural meaning and when it is used terminally, it has semantic meaning. Some of multi-purpose block elements are:

- ```<div>``` is a division. It is normally structural, but it can contain content.

- ```<li>``` is a list item. Typically, it is a terminal block containing content, but it may contain structural blocks such as tables and lists, or terminal blocks such as headings and paragraphs.


- ```<td>``` and ```<th>``` are table cells. ```<td>``` is a data cell and ```<th>``` is a header cell. Typically, cells are terminal blocks containing content, but they may contain structural or terminal blocks.

- ```<form>``` is a data-entry form. It may contain structural blocks that organize form controls or it may directly contain inline form controls. It may also contain terminal blocks such as heading and paragraph.

**4. Inline Elements**
    Inline elements are used to identify the meaning of text, to control the flow of text, and to insert external content into the document, such as images and controls. Inlineelements are content. Some of inline elements are:

- ```<span>``` is generic and has neutral importance. ```<span>``` has no default style and meaning, so use it for any purpose.

- ```<strong>``` is bold by default. ```<em>``` is italic by default. Search engines use ```<em>``` i.e. emphasis and ```<strong>``` to rank content.

- Phrase inlines include ```<a>```, ```<cite>```, ```<code>```, ```<kbd>```, ```<samp>```, and ```<var>```.

- Word inlines include ```<abbr>``` and ```<dfn>```

- Character inline include ```<sub>``` and ```<sup>```

- Flow-control elements control the flow of content, such as ```<br />```, 
which inserts a line break, and ```<bdo>```, which changes the direction of the flow.

- Replaced elements are replaced by external content, such as ```<img>```, which is replaced by an image or ```<object>```, which can be replaced by a video, a flash movie, a sound file etc.

