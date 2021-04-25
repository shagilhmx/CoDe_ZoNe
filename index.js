import * as React from "react"
import { Link } from "gatsby"
import { StaticImage } from "gatsby-plugin-image"

import Layout from "../components/layout"
import Seo from "../components/seo"
import { Form, Button , Container,Row ,Col} from "react-bootstrap"
const IndexPage = () => (
  <Layout>
    <Container>
    <Form>

      <Form.Group controlId="formBasicFirstName">
        <Form.Label>FirstName:</Form.Label><br/>
        <Form.Control type="text"/>
      </Form.Group>

      <Form.Group controlId="formBasicLastName">
        <Form.Label>Last Name:</Form.Label><br/>
        <Form.Control type="text"/>
      </Form.Group>

      <Form.Group controlId="formBasicEmail">
        <Form.Label>Email:</Form.Label><br/>
        <Form.Control type="text"/>
      </Form.Group>

      <Form.Group controlId="formBasicPhoneNumber">
        <Form.Label>Phone Number:</Form.Label><br/>
        <Form.Control type="text"/>
      </Form.Group>

      <Form.Group controlId="formBasicPassword">
        <Form.Label>Password:</Form.Label><br/>
        <Form.Control type="password"/>
      </Form.Group><br/>
      
      <Button type="submit">Submit</Button>
    </Form>
    </Container>
  </Layout>
)

export default IndexPage
